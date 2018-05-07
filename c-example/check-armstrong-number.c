#include <stdio.h>
#include <math.h>

int example1() {
    int number, originInteger, remainder, result = 0;

    printf("输入三位数:");
    scanf("%d", &number);

    originInteger = number;

    while (originInteger != 0) {
        remainder = originInteger%10;
        result += remainder * remainder * remainder;
        originInteger /= 10;
    }

    if (result == number) {
        printf("%d 是Armstrong数", number);
    } else {
        printf("%d 不是Armstrong数", number);
    }
    return 0;
}

int main() {
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
    printf("Input two number:");
    scanf("%d %d", &low, &high);
    printf("%d 和 %d之间的Armstrong数为:", low, high);

    for (i = low+1; i < high; i++) {
        temp1 = i;
        temp2 = i;

        // 计算number位数
        while (temp1 != 0) {
            temp1 /= 10;
            n++;
        }

        while (temp2 != 0 ) {
            remainder = temp2%10;
            result +=pow(remainder, n);
            temp2 /= 10;
        }

        if (result == i) {
            printf("%d\t", i);
        }

        n = 0;
        result = 0;
    }
    return 0;
}

