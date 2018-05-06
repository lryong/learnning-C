#include <stdio.h>
#include <math.h>

void example1() {
    int base, exponent;
    long long result = 1;

    printf("input base:");
    scanf("%d", &base);
    
    printf("input exponent:");
    scanf("%d", &exponent);

    while (exponent != 0) {
        result *=base;
        exponent--;
    }

    printf("caculate result:%lld\n", result);
}


// use pow()
/*
void example2() {
    int base, exponent;
    long long result = 1;

    printf("input base:");
    scanf("%d", &base);
    
    printf("input exponent:");
    scanf("%d", &exponent);
    
    result = pow(base, exponent);
    printf("caculate result:%lld\n", result);
}
*/


// use recursion
int power(int base, int exponent) {
    if (exponent != 0) {
        return (base * power(base, exponent-1));
    } else {
        return 1;
    }
}

int main() {
    int base, exponent;
    long long result = 1;

    printf("input base:");
    scanf("%d", &base);
    
    printf("input exponent:");
    scanf("%d", &exponent);
    
    result = power(base, exponent);
    printf("caculate result:%lld\n", result);
    return 0;
}
