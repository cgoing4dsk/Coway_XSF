/* AquaPure-X1 (가상) 정수기 제어 펌웨어 - 설정값 */
#ifndef CONFIG_H
#define CONFIG_H

#define MODEL_NAME          "AquaPure-X1"
#define FW_VERSION          "1.0.0"

#define TDS_WARNING_PPM     50      /* 수질 경고 기준 (ppm) */
#define COLD_TARGET_C       5       /* 냉수 목표 온도 */
#define HOT_TARGET_C        85      /* 온수 목표 온도 */
#define STERILIZE_HOURS     72      /* 자동 살균 주기 (시간) */

#define FILTER_SEDIMENT_L   3000    /* 세디먼트 필터 수명 (L) */
#define FILTER_CARBON_L     4000    /* 카본 필터 수명 (L) */
#define FILTER_MEMBRANE_L   8000    /* 멤브레인 필터 수명 (L) */

#endif
