#ifndef SENSORS_H
#define SENSORS_H
int   sensor_read_tds(void);            /* 수질 TDS (ppm) */
int   sensor_read_temp(int target_c);   /* 수온 (°C) */
float sensor_read_flow(int seconds);    /* 유량 (L) */
#endif
