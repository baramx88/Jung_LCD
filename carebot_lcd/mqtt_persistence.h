// mqtt_persistence.h
#ifndef MQTT_PERSISTENCE_H
#define MQTT_PERSISTENCE_H

#include <stdint.h>
#include <stdbool.h>
#include "FS.h"
#include "LittleFS.h"

// 파일 시스템 설정
#define MAX_FILE_SIZE      (1024 * 1024)  // 1MB
#define MQTT_DATA_PATH "/mqtt_data"      // MQTT 데이터 저장 경로
#define MQTT_BACKUP_PATH "/mqtt_backup"  // MQTT 백업 파일 경로
#define VIRTUAL_SD_PATH "/virtual_sd"    // 가상 SD 카드 경로

//#define DATA_FILE         "/mqtt_data.bin"
//#define COMPRESSED_FILE   "/mqtt_data.cmp"
#define STATUS_FILE       "/mqtt_status.json"
// MQTT 데이터 파일 관련
#define DATA_FILE MQTT_DATA_PATH"/mqtt_data.bin"       // 원래 "/mqtt_data.bin"
#define STATUS_FILE MQTT_DATA_PATH"/mqtt_status.json"  // 원래 "/mqtt_status.json"
#define COMPRESSED_FILE MQTT_DATA_PATH"/mqtt_comp.bin" // 원래 "/mqtt_comp.bin"

#define BACKUP_SIZE_THRESHOLD   (1024 * 1024)  // 1MB
#define BACKUP_TIME_INTERVAL    (60 * 60 * 1000)  // 1시간
#define NETWORK_STABLE_TIME     (5 * 60 * 1000)  // 5분
#define MSG_COUNT_THRESHOLD     1000  // 메시지 수 기준

#define BACKUP_CHUNK_SIZE 1024  // 백업 청크 크기
#define RESTORE_CHUNK_SIZE 1024  // 백업과 동일하게 1KB 단위


// 저장 메시지 구조체
#pragma pack(1)
typedef struct {
    time_t  timestamp;     // 저장 시점
    uint16_t topic_len;     // 토픽 길이
    uint16_t payload_len;   // 페이로드 길이
    char data[];           // 토픽과 페이로드 데이터
} stored_message_t;
#pragma pack()

// 상태 정보 구조체
typedef struct {
    size_t total_size;      // 전체 크기
    size_t comp_size;       // 압축 크기
    float comp_ratio;       // 압축률
    uint32_t msg_count;     // 메시지 수
    time_t last_update;     // 마지막 업데이트
} file_status_t;

// 데이터 저장 관련
typedef struct {
    bool ack_received;        // ACK 수신 여부
    uint16_t ack_chunk;      // ACK 받은 청크 번호
    uint8_t ack_status;      // ACK 상태 (에러 여부 등)
    bool waiting_for_ack;    // ACK 대기 중인지 여부
} backup_state_t;

typedef struct {
   bool data_received;       // 복원 데이터 수신 여부
   uint16_t data_chunk;     // 현재 수신한 청크 번호
   uint16_t chunk_size;     // 수신한 데이터 크기
   uint8_t* data;           // 수신한 데이터 포인터
   bool is_last_chunk;      // 마지막 청크인지 여부
   bool waiting_for_data;   // 데이터 대기 중인지 여부
   uint8_t data_status;     // 상태 (에러 등)
} restore_state_t;

extern backup_state_t backup_state;  // 전역 변수 선언
extern restore_state_t restore_state;

// 전역 변수 선언
//extern file_status_t g_file_status;

// 함수 선언
//void update_status(void);
// 함수 선언
bool mqtt_storage_init(void);
bool mqtt_save_message(const char* topic, const char* payload);
bool mqtt_compress_data(void);
void mqtt_handle_network_change(bool connected);
void mqtt_clear_storage(void);

void check_restore_condition(void);
void check_backup_condition(void);
void check_network_stability(bool currently_connected);
void mqtt_backup_data(void);
void mqtt_restore_data(void);

#endif // MQTT_PERSISTENCE_H