#include <stdio.h>

int main() {
    long long n, tmp;
    int count = 0;

    printf("请输入一个正数:");
    scanf("%lld", &n);
    tmp = n;

    while (n != 0) {
        n /= 10;
        count++;
    }
    printf("数字%lld一共有%d位", tmp, count);
    return 0;
} 
