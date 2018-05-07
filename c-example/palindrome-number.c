#include <stdio.h>

int main() {
    int n, reverseInteger = 0, remainder, originInteger;

    printf("Input a number:");
    scanf("%d", &n);

    originInteger = n;

    while (n != 0) {
        remainder = n%10;
        reverseInteger = reverseInteger*10 + remainder;
        n /= 10;
    }

    if (originInteger == reverseInteger) {
        printf("%d 是回文数", originInteger);
    } else {
        printf("%d 不是回文数", originInteger);
    }
    return 0;
}

