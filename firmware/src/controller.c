/* 출수 모드 · 살균 제어 */
#include <stdio.h>
#include "config.h"
#include "sensors.h"
#include "filter.h"
#include "controller.h"

static int hours_since_sterilize;

void controller_init(void) { filter_init(); hours_since_sterilize = 0; }

void controller_dispense(water_mode_t mode, int seconds)
{
    static const char *name[] = { "정수", "냉수", "온수" };
    float liters = sensor_read_flow(seconds);
    int tds = sensor_read_tds();
    filter_add_usage(liters);
    if (mode == MODE_PURIFIED)
        printf("[%s] %.2fL TDS=%dppm%s\n", name[mode], liters, tds, tds >= TDS_WARNING_PPM ? " (경고)" : "");
    else
        printf("[%s] %.2fL %d°C TDS=%dppm\n", name[mode], liters,
               sensor_read_temp(mode == MODE_COLD ? COLD_TARGET_C : HOT_TARGET_C), tds);
}

int controller_tick_hours(int hours)
{
    hours_since_sterilize += hours;
    if (hours_since_sterilize >= STERILIZE_HOURS) { hours_since_sterilize = 0; return 1; }
    return 0;
}
