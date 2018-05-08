#include <stdio.h>

struct TIME {
    int second;
    int minutes;
    int hours;
};

void difference_between_time_period(struct TIME t1, struct TIME t2, struct TIME *diff);

int main() {
    struct TIME start_time, stop_time, diff;
    printf("输入开始时间:\n");
    printf("输入小时，分钟，秒:");
    scanf("%d %d %d", &start_time.hours, &start_time.minutes, &start_time.second);

    printf("输入结束时间:\n");
    printf("输入小时，分钟，秒:");
    scanf("%d %d %d", &stop_time.hours, &stop_time.minutes, &stop_time.second);

    // 计算差值
    difference_between_time_period(start_time, stop_time, &diff);

    printf("\n差值： %d:%d:%d -", start_time.hours, start_time.minutes, start_time.second);
    printf("%d:%d:%d =", stop_time.hours, stop_time.minutes, stop_time.second);
    printf("%d:%d:%d", diff.hours, diff.minutes, diff.second);
    return 0;
}

void difference_between_time_period(struct TIME start, struct TIME stop, struct TIME *diff) {
    if (stop.second > start.second) {
        --start.minutes;
        start.second += 60;
    }

    diff->second = start.second - stop.second;

    if (stop.minutes> start.minutes) {
        --start.hours;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours= start.hours- stop.hours;
}
