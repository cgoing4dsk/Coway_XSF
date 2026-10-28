#ifndef CONTROLLER_H
#define CONTROLLER_H
typedef enum { MODE_PURIFIED = 0, MODE_COLD, MODE_HOT } water_mode_t;
void controller_init(void);
void controller_dispense(water_mode_t mode, int seconds);
int  controller_tick_hours(int hours);      /* 살균 수행 시 1 */
#endif
