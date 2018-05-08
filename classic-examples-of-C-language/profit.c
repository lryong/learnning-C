#include <stdio.h>

int main() {
    int money;
    float profit = 0.0;
    printf("Input the money:");
    scanf("%d", &money);
    if (money <= 100000) {
        profit += money * 0.1;
    } else if ( 100000 < money  && money <= 200000) {
        profit += 100000 * 0.1 + (money - 100000) * 0.075;
    } else if ( 200000 < money  && money <= 400000) {
        profit += 100000 * 0.1 + 100000 * 0.075 + (money - 200000) * 0.05;
    } else if ( 400000 < money  && money <= 600000) {
        profit += 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (money - 400000) * 0.03;
    } else if ( 600000 < money && money <= 1000000) {
        profit += 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (money - 600000) * 0.015;
    } else if ( money > 1000000) {
        profit += 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (money - 1000000) * 0.01;
    } else {
        profit = 0.0;
    }
    printf("总共的利润是%f", profit);
    return 0;
}




