#include <stdio.h>

int main() {
    double number;

    printf("Input a number:");
    scanf("%lf", &number);

    if (number >= 0.0) {
        if (number == 0.0) {
            printf("Your input is zero\n");
        } else {
            printf("Your input is a positive number\n");
        }
    } else {
        printf("Your input is a negative number\n");
    }
    return 0;
}


