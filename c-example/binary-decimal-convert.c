#include <stdio.h>
#include <math.h>

int convert_binary_2_decimal(long long n);
int convert_decimal_2_binary(int n); 

int convert_binary_2_decimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        i++;
    }
    return  decimalNumber;
}

int convert_decimal_2_binary(int n) {
    int binaryNumber = 0, i = 1, remainder;
    while (n != 0) {
        remainder = n%2;
        n /= 2;
        binaryNumber +=  remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
    long long n;
    printf("请输入一个二进制数:");
    scanf("%lld", &n);
    printf("二进制数%lld转换为十进制数为%d:", n, convert_binary_2_decimal(n));
    return 0;
}

