#ifndef FILTER_H
#define FILTER_H
void filter_init(void);
void filter_add_usage(float liters);
int  filter_remaining_percent(int index);   /* 0:세디먼트 1:카본 2:멤브레인 */
#endif
