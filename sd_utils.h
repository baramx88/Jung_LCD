#if 0
#ifndef SD_UTILS_H
#define SD_UTILS_H

#include <Arduino.h>
#include <SPI.h>
#include <SD.h>

// SD 카드 유틸리티 함수 선언
bool sd_init();                  // SD 카드 초기화
bool sd_exists(const char* path); // 파일/디렉토리 존재 확인
bool sd_list(const char* path);   // 디렉토리 내용 출력
bool sd_remove(const char* path); // 파일 삭제

// 콘솔 명령어 처리 함수
void handle_sd_command(const char* cmd);

#endif // SD_UTILS_H
#endif