#include <stdio.h>

long int multiply_numbers(int num) {
    if (num >= 1) {
        return num*multiply_numbers(num-1);
    } else {
        return 1;
    }
}


int main() {
    int num;
    printf("Input a number:");
    scanf("%d", &num);
    printf("阶乘的结果是:%ld", multiply_numbers(num));
    return 0;
}

