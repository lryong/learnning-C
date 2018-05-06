#include <stdio.h>

int main1() {
    int n1, n2, minMultiple;
    printf("请输入两个正整数: ");
    scanf("%d %d", &n1, &n2);

    minMultiple = (n1 > n2)? n1: n2;
    while(1) {
        if (minMultiple % n1 == 0 && minMultiple % n2 == 0) {
            printf("%d 和 %d的最小公约数是 %d", n1, n2, minMultiple); 
            break;
        }
        minMultiple++;
    }
    return 0;
}

/* 实例2： 通过最大公约数，有性质：(a, b)*[a, b] = a*b; */

int main() {
    int n1, n2, i, gcd, lcm;
    printf("输入两个正整数: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; i++) {
        if (n1%i == 0 && n2%i == 0) {
            gcd = i;
        }
    }

    lcm = (n1 * n2)/gcd;
    printf("%d 和 %d的最小公倍数为: %d", n1, n2, lcm);
    return 0;
}

