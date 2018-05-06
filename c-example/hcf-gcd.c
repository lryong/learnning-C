#include <stdio.h>

int hcf(int n1, int n2);

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    printf("%d 和 %d的最大公约数为%d", n1, n2, hcf(n1, n2));
    return 0;
}

/* 辗转相除法, 递归 */
int hcf(int n1, int n2) {
    if (n2 != 0) {
        return hcf(n2, n1%n2);
    } else {
        return n1;
    }
}

int main1() {
    int n1, n2, i;
    int resp;

    printf("请输入两个数:");
    scanf("%d %d", &n1, &n2);

    printf("这是一个测试");
    for (i = 1; i <= n1 && i <= n2; i++) {
        if (n1%i == 0 && n2%i == 0) {
            resp = i;
        }
    }
    printf("%d 和 %d的最大公约数为：%d", n1, n2, resp);
    return 0;
}


/*
int main()
{
    int n1, n2, i, gcd;

    printf("输入两个正整数，以空格分隔: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // 判断 i 是否为最大公约数
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("%d 和 %d 的最大公约数是 %d", n1, n2, gcd);

    return 0;
}
*/

