/* 센서 드라이버 (데모용 시뮬레이션) */
#include <stdlib.h>
#include "sensors.h"

int sensor_read_tds(void)          { return 10 + rand() % 60; }
int sensor_read_temp(int target_c) { return target_c + (rand() % 3) - 1; }
float sensor_read_flow(int seconds){ return 1.2f * seconds / 60.0f; }
