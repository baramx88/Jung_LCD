#ifndef AUDIO_H
#define AUDIO_H

#include <Arduino.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/i2s.h"

// WAV 헤더 크기 정의
#define WAV_HEADER_SIZE 44

// 최소값 계산 매크로
#ifndef MIN
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#endif

// 사운드 타입 열거형
typedef enum {
    NONE = 0,
    WATER,
    URINATION
} SoundType;

// 오디오 저장 타입
typedef enum {
    STORAGE_SD_CARD,    // SD 카드에서 매번 읽기 (원래 방식)
    STORAGE_RAM,        // RAM에 파일 유지 (최고 성능)
    STORAGE_SPIFFS      // 로컬 파일시스템에 저장 (절충안)
} AudioStorageType;

// 오디오 반복 모드
typedef enum {
    REPEAT_NONE,        // 반복 없음
    REPEAT_INFINITE,    // 무한 반복
    REPEAT_COUNT        // 지정된 횟수만큼 반복
} AudioRepeatMode;

// RAM 저장용 오디오 파일 구조체
typedef struct {
    uint8_t* data;
    size_t size;
    bool loaded;
} AudioFile;

// 오디오 재생 상태 구조체
typedef struct {
    bool isPlaying;
    SoundType currentSound;
    AudioRepeatMode repeatMode;
    int repeatCount;
    int currentRepeat;
    TaskHandle_t playbackTaskHandle;
    bool stopRequested;
} AudioState;

/**
 * 오디오 재생 태스크 매개변수 구조체
 */
typedef struct {
    int fileIndex;
    char filename[16];  // 파일 이름 (001, 002 등)
    AudioRepeatMode repeatMode;
    int repeatCount;
} AudioTaskParams;

// SPI 초기화 및 종료 함수
bool spi_init_for_sd();
void spi_deinit_for_sd();

// 오디오 시스템 초기화
bool audio_init(AudioStorageType storage_type);

// 오디오 파일을 메모리에 로드
bool audio_load_files_to_ram(void);

// 오디오 파일을 SPIFFS에 복사
bool audio_copy_files_to_spiffs(void);

// 특정 파일 재생 시작 (반복 모드와 횟수 지정 가능)
bool audio_start(const char* filename, AudioRepeatMode repeatMode = REPEAT_NONE, int repeatCount = 0);

// 오디오 재생 중지
void audio_stop(void);

// 볼륨 설정 (0 ~ 10)
void audio_set_volume(uint8_t vol);

// 현재 볼륨 가져오기
uint8_t audio_get_volume(void);

// 특정 사운드 타입 재생 (반복 모드와 횟수 지정 가능)
void audio_play_sound(SoundType sound, AudioRepeatMode repeatMode = REPEAT_NONE, int repeatCount = 0);

// 사운드 재생기 태스크
void soundPlayerTask(void* parameter);

// 별도 태스크로 실행되는 재생 태스크
void audio_playback_task(void* parameter);

// 물소리 재생 함수 (반복 모드와 횟수 지정 가능)
void play_water_sound(AudioRepeatMode repeatMode = REPEAT_INFINITE, int repeatCount = 0);

// 배뇨 사운드 재생 함수 (반복 모드와 횟수 지정 가능)
void play_urination_sound(AudioRepeatMode repeatMode = REPEAT_INFINITE, int repeatCount = 0);

// 재생 중인 사운드 중지 함수
void stop_sound();

// 현재 재생 중인지 확인
bool is_audio_playing();

// 외부 변수 선언
extern QueueHandle_t soundQueue;
//extern SemaphoreHandle_t sdMutex;
extern SemaphoreHandle_t i2sMutex;
extern volatile bool isAudioPlaying;
extern volatile bool stopRequested;
extern uint8_t volume_value;
extern uint8_t current_volume;
extern AudioFile audioFiles[2];
extern AudioStorageType currentStorageType;

#endif // AUDIO_H