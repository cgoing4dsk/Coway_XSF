/* 필터 수명 관리 */
#include "config.h"
#include "filter.h"

static const int life[3] = { FILTER_SEDIMENT_L, FILTER_CARBON_L, FILTER_MEMBRANE_L };
static float used[3];

void filter_init(void) { used[0] = used[1] = used[2] = 0.0f; }

void filter_add_usage(float liters)
{
    for (int i = 0; i < 3; i++) used[i] += liters;
}

int filter_remaining_percent(int index)
{
    int p = (int)(100.0f * (1.0f - used[index] / life[index]));
    return p < 0 ? 0 : p;
}
