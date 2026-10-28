# SW BOM – AquaPure-X1 제어 펌웨어 v1.0.0

## 1. 소스 구성 (Software Logical Item)
| 모듈 | 파일 | 역할 |
|---|---|---|
| Main | firmware/src/main.c | 진입점 |
| Controller | firmware/src/controller.c | 출수 모드 · 살균 제어 |
| Sensors | firmware/src/sensors.c | 수질 · 수온 · 유량 센서 |
| Filter | firmware/src/filter.c | 필터 수명 관리 |
| Config | firmware/include/config.h | 모델 · 버전 · 기준값 |
| Build | firmware/Makefile | 빌드 스크립트 |

## 2. 빌드 결과물 (Physical Product)
| 파일 | 형식 | 용도 |
|---|---|---|
| release/v1.0.0/AquaPure_X1_FW_v1.0.0.hex | Intel HEX | MCU 다운로드용 펌웨어 |
| release/v1.0.0/AquaPure_X1_FW_v1.0.0.bin | Binary | OTA · 생산 라인 기록용 |
| release/v1.0.0/checksum.sha256 | SHA-256 | 무결성 검증 |

## 3. 제품 BOM 연결
정수기 (AquaPure-X1) ─ 메인 제어 PCB 조립 ─ **제어 펌웨어 v1.0.0** (Physical Product)
