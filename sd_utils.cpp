#if 0
#include "sd_utils.h"
#include "common.h"

extern SemaphoreHandle_t sdMutex;

/**
 * SD 카드 초기화
 */
bool sd_init() {
    if (xSemaphoreTake(sdMutex, pdMS_TO_TICKS(5000)) != pdTRUE) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 뮤텍스 획득 실패");
        return false;
    }
    
    // SPI 재초기화
    SPI.end();
    delay(100);
    SPI.begin();
    delay(100);
    
    bool result = false;
    
    if (SD.begin(10, SPI, 4000000)) {
        logMessage("AUDIO", LOG_LEVEL_INFO, "SD 카드 마운트 성공");
        result = true;
    } else {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 카드 마운트 실패");
        result = false;
    }
    
    xSemaphoreGive(sdMutex);
    return result;
}

/**
 * 파일 또는 디렉토리 존재 여부 확인
 */
bool sd_exists(const char* path) {
    if (xSemaphoreTake(sdMutex, pdMS_TO_TICKS(5000)) != pdTRUE) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 뮤텍스 획득 실패");
        return false;
    }
    
    if (!SD.begin(10, SPI, 4000000)) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 카드 마운트 실패");
        xSemaphoreGive(sdMutex);
        return false;
    }
    
    bool exists = SD.exists(path);
    
    if (exists) {
        logMessage("AUDIO", LOG_LEVEL_INFO, "파일이 존재함: %s", path);
    } else {
        logMessage("AUDIO", LOG_LEVEL_INFO, "파일이 존재하지 않음: %s", path);
    }
    
    xSemaphoreGive(sdMutex);
    return exists;
}

/**
 * 파일 삭제
 */
bool sd_remove(const char* path) {
    if (xSemaphoreTake(sdMutex, pdMS_TO_TICKS(5000)) != pdTRUE) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 뮤텍스 획득 실패");
        return false;
    }
    
    if (!SD.begin(10, SPI, 4000000)) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 카드 마운트 실패");
        xSemaphoreGive(sdMutex);
        return false;
    }
    
    bool result = SD.remove(path);
    
    if (result) {
        logMessage("AUDIO", LOG_LEVEL_INFO, "파일 삭제 성공: %s", path);
    } else {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "파일 삭제 실패: %s", path);
    }
    
    xSemaphoreGive(sdMutex);
    return result;
}

/**
 * 디렉토리 내용 출력
 */
bool sd_list(const char* path) {
    if (xSemaphoreTake(sdMutex, pdMS_TO_TICKS(5000)) != pdTRUE) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 뮤텍스 획득 실패");
        return false;
    }
    
    if (!SD.begin(10, SPI, 4000000)) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "SD 카드 마운트 실패");
        xSemaphoreGive(sdMutex);
        return false;
    }
    
    File dir = SD.open(path);
    
    if (!dir) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "디렉토리 열기 실패: %s", path);
        xSemaphoreGive(sdMutex);
        return false;
    }
    
    if (!dir.isDirectory()) {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "%s은(는) 디렉토리가 아님", path);
        dir.close();
        xSemaphoreGive(sdMutex);
        return false;
    }
    
    logMessage("AUDIO", LOG_LEVEL_INFO, "디렉토리 내용: %s", path);
    logMessage("AUDIO", LOG_LEVEL_INFO, "--------------------------");
    
    File entry;
    int fileCount = 0;
    int dirCount = 0;
    
    while (entry = dir.openNextFile()) {
        if (entry.isDirectory()) {
            dirCount++;
            char dirName[128];
            sprintf(dirName, "[DIR] %s", entry.name());
            logMessage("AUDIO", LOG_LEVEL_INFO, "%s", dirName);
        } else {
            fileCount++;
            char fileName[256];
            sprintf(fileName, "%s (%d bytes)", entry.name(), entry.size());
            logMessage("AUDIO", LOG_LEVEL_INFO, "%s", fileName);
        }
        entry.close();
    }
    
    logMessage("AUDIO", LOG_LEVEL_INFO, "--------------------------");
    logMessage("AUDIO", LOG_LEVEL_INFO, "총 %d 파일, %d 디렉토리", fileCount, dirCount);
    
    dir.close();
    xSemaphoreGive(sdMutex);
    return true;
}

/**
 * 콘솔 명령어 처리 함수
 */
void handle_sd_command(const char* cmd) {
    char command[256];
    strncpy(command, cmd, sizeof(command) - 1);
    command[sizeof(command) - 1] = '\0';
    
    // 명령어 파싱
    char* token = strtok(command, " ");
    if (!token) return;
    
    // ls 명령어 처리
    if (strcmp(token, "ls") == 0) {
        token = strtok(NULL, " ");
        const char* path = token ? token : "/";
        sd_list(path);
    }
    // exists 명령어 처리
    else if (strcmp(token, "exists") == 0) {
        token = strtok(NULL, " ");
        if (token) {
            sd_exists(token);
        } else {
            logMessage("AUDIO", LOG_LEVEL_ERROR, "Usage: exists <path>");
        }
    }
    // rm 명령어 처리
    else if (strcmp(token, "rm") == 0) {
        token = strtok(NULL, " ");
        if (token) {
            sd_remove(token);
        } else {
            logMessage("AUDIO", LOG_LEVEL_ERROR, "Usage: rm <path>");
        }
    }
    // init 명령어 처리
    else if (strcmp(token, "init") == 0) {
        sd_init();
    }
    // 알 수 없는 명령어
    else {
        logMessage("AUDIO", LOG_LEVEL_ERROR, "알 수 없는 명령어: %s", token);
        logMessage("AUDIO", LOG_LEVEL_INFO, "사용 가능한 명령어: ls, exists, rm, init");
    }
}
#endif