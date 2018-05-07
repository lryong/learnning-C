#include <stdio.h>

void judge_prime_number() {
    int n, i, flag = 0;
    printf("Input a number:");
    scanf("%d", &n);
    for (i = 2; i < n/2; i++ ) {
        if (n%i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("%d 是素数", n);
    } else {
        printf("%d 不是素数", n);
    }

}

void get_prime_number_between_2_numbers() {
    int low, high, i, flag;
    printf("Input two numbers:");
    scanf("%d %d", &low, &high);
    printf("%d 和 %d之间的素数为: ", low, high);

    while ( low < high) {
        flag = 0;
        for ( i = 2; i < low/2; i++) {
            if (low%i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d\t", low);
        }
        low++;
    }
}

int main() {
    // judge_prime_number();
    get_prime_number_between_2_numbers();
}
