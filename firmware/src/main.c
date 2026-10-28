/* AquaPure-X1 (가상) 정수기 제어 펌웨어 - 진입점 */
#include <stdio.h>
#include "config.h"
#include "controller.h"
#include "filter.h"

int main(void)
{
    printf("%s FW v%s\n", MODEL_NAME, FW_VERSION);
    controller_init();
    controller_dispense(MODE_PURIFIED, 10);
    controller_dispense(MODE_COLD, 8);
    controller_dispense(MODE_HOT, 5);
    if (controller_tick_hours(72)) printf("자동 살균 수행\n");
    printf("필터 잔여: 세디먼트 %d%% / 카본 %d%% / 멤브레인 %d%%\n",
           filter_remaining_percent(0), filter_remaining_percent(1), filter_remaining_percent(2));
    return 0;
}
