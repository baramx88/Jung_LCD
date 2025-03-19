#ifndef COMMON_H
#define COMMON_H

#include <Arduino.h>
#include <nvs_flash.h>
#include <stdarg.h>
#include <time.h>
#include <FS.h>

#include <Arduino_GFX_Library.h>

//extern Arduino_GFX *gfx;

extern SemaphoreHandle_t sdMutex;

extern  int cover_OPEN;
extern int motor_ON;
extern int wifi_ON;
extern int error_ON;
extern int urine_ON;
extern int connect_ON;
extern int diaper_ON;
extern int fulllevel_ON;
extern int power_ON;
extern int menu_ON;
extern int water_level; 

extern char timestamp_decode[];
extern char timestamp_display[];

extern File file;

extern bool backlightSet;

extern void fulllevel_event_handler();

struct SystemState {
    bool isWarmedUp;
    bool isWeightCalibrated;
    bool isBMECalibrated;
    bool isSystemReady;
    volatile bool isInService;
};
extern EventGroupHandle_t systemInitEventGroup;
extern struct SystemState gSystemState;

#define SERIAL_NUMBER_KEY "serial_num"
#define SETTINGS_KEY "settings"
#define MAX_SERIAL_NUMBER_LENGTH 32

typedef struct {
//    char wifi_ssid[32];
//    char wifi_password[64];
//    char device_id[32];
    char current_version[16];
//    char serial_number[32];  // 시리얼 번호 추가
    
    uint8_t storage_type;   // 오디오 파일 저장 방법, 0: sd_card, 1: RAM, 2: SPIFFS
    uint8_t volume_value;
//    time_t firstUseTime;        // 첫 사용 시간 추가

} SystemSettings;

// 상태 구조체 정의
#if 0
typedef struct {
    // MQTT 통신용 필드
    char clientUid[32];          // 케어봇 UID
    char deviceUid[32];          // 감지센서 UID
    char companyId[8];           // 회사 ID
    char packetId[8];            // 단말기 ID
    uint32_t groupNumber;        // 기저귀 교체 그룹 번호
    uint32_t packetNumber;       // 측정데이터 순번
    
    // 기존 DeviceState 필드
    bool isFullWeight;           // 만수위(중량) 상태
    float lastWeight;            // 마지막 측정 무게
    bool defecationDetected;     // 배변 감지 상태
    bool isCovered;              // 커버 상태
    bool isDiaperIn;            // 기저귀 상태
    bool isFulllevel;             // 만수위(센서) 상태
    bool isPowerOn;              // 전원 연결상태
    bool lowBatteryWarning;      // 배터리 경고
    bool motorEnabled;           // 모터 활성화 상태
    bool motorRunning;           // 모터 동작 상태
    float weightatMotorStart;    // 모터 시작시 무게
    float weightatMotorStop;     // 모터 정지시 무게
    bool isInService;           // 서비스 상태
    uint32_t systemStatus;       // 시스템 상태 (장비이상여부, LCD 전달)
    
    // MQTT 상태 필드
    uint8_t deviceStatus;        // 장치 상태 (0: 대기, 1: 정지, 2: 수동, 3: 건조, 4: 만수위, 5: 덮개열림)
    bool pressureDetectingYn;    // 읍압모듈체결구분
    bool urinationYn;            // 배뇨 감지
    bool fecesYn;               // 배변 감지
    bool fwlYn;                 // 만수위 상태
    bool bloodFlowYn;           // 혈류 확인
    bool urinationInduceYn;     // 배뇨 유도
    float gasSensor;            // 가스센서값
    float temperatureVal;        // 온도
    float humidityVal;          // 습도
    float atm;                  // 기압
    float rVal;                 // R 값
    float cVal;                 // C 값

    uint8_t batteryLevel;       // 배터리 레벨
    float motorV;               // 모터 전압
    float motorA;               // 모터 전류
    float motorOutput;          // 모터 출력
    uint16_t motorRpm;          // 모터 RPM
    
    // 통계 필드
    uint32_t collectedAddAt;    // 사용 누적 일수
    uint32_t diaperCount;       // 흡인패드 교체 수
    uint32_t suctionCount;      // 흡인 횟수
    uint32_t urinationCount;    // 배뇨 횟수
    uint32_t fecesCount;        // 배변 횟수
    uint32_t voidingCount;      // 배뇨통 비우기 횟수
    float dayWeight;            // 일일 누적 배뇨량
    char collectedAt[20];       // 수집 시간
    char collectedAtOff[8];     // GMT 오프셋
    char firmwareVersion[16];   // 펌웨어 버전

        // MQTT 상태 관련 필드 추가
    uint8_t mqttStatus;          // MQTT 연결 상태
    uint32_t lastMqttConnectTime; // 마지막 MQTT 연결 시도 시간
    uint32_t mqttReconnectCount;  // 재연결 시도 횟수
    bool isMqttEnabled;          // MQTT 활성화 상태
} DeviceState;
#endif
//extern WeightSensorType currentWeightSensor;
extern SystemSettings settings;
//extern DeviceState gDeviceState;

// 명령 타입 정의
#define CMD_START_MOTOR 1
#define CMD_STOP_MOTOR 2
#define CMD_ACTIVATE_FAN 3
#define CMD_RESET 4
#define CMD_OTA_UPDATE 5
#define CMD_LOW_BATTERY_ALERT 6

#define CMD_STOP_SOUND 11
#define CMD_WATER_SOUND 12
#define CMD_URINE_SOUND 13

#define ERROR_I2C_RTC     0x01
#define ERROR_I2C_BME     0x02
#define ERROR_I2C_KEYPAD  0x04
#if 0
// 구조체 정의
typedef struct {
    float urineSensorValue1;
    float urineSensorValue2;
    float weightSensorValue;
    float gasSensorValue;
    bool detectUrine;
    bool coverStatus;
    bool powerStatus;
    bool fulllevelStatus;
    bool diaperStatus;
    uint8_t systemStatus;
    float batteryLevel;

    // BME680 관련 추가 필드들
    float temperature;     // 온도 (°C)
    float humidity;        // 습도 (%)
    float pressure;        // 기압 (hPa)

    unsigned long urineTimestamp;
    unsigned long weightTimestamp;
    unsigned long gasTimestamp;
    unsigned long coverTimestamp;
    unsigned long fulllevelTimestamp;
    unsigned long diaperTimestamp;
    unsigned long batteryTimestamp;
    unsigned long powerTimestamp;
    unsigned long systemTimestamp;
    unsigned long bmeTimestamp;
} SensorData;

typedef struct {
    int commandType;
    int value;
} Command;
#endif
// 로그 레벨 정의
typedef enum {
    LOG_LEVEL_DEBUG,
    LOG_LEVEL_INFO,
    LOG_LEVEL_WARN,
    LOG_LEVEL_ERROR
} LogLevel;

// 전역 변수 선언
extern QueueHandle_t commandQueue;
extern QueueSetHandle_t queueSet;

extern SemaphoreHandle_t spiSemaphore;
extern SemaphoreHandle_t uartSemaphore;

// 초기화 함수 선언
bool init_filesystem();

void initializeNVS();
void initializeSystem();

// 유틸리티 함수 선언
void readNVS(const char* key, void* value, size_t length);
void writeNVS(const char* key, const void* value, size_t length);

// 로그 함수 선언
void logMessage(const char* taskName, LogLevel level, const char* format, ...);


// 로그 레벨을 문자열로 변환하는 함수 선언
const char* logLevelToString(LogLevel level);

void print_memory_info(void);
void print_memory_status(void);

void check_memory(uint32_t cap, const char* name);

// 시스템 설정 함수 선언
bool loadSettings();
bool saveSettings();
//void setWiFiCredentials(const char* ssid, const char* password);
//void setMQTTCredentials(const char* server, int port, const char* user, const char* password);
//void setDeviceInfo(const char* deviceId, const char* version);
void loadSerialNumber();
void saveSerialNumber();

void setSerialNumber(const char* serialNumber);
const char* getSerialNumber();
void PrintAllSettings();
void defaultSetSettings();  // 새로운 함수 선언 추가

#endif // COMMON_H