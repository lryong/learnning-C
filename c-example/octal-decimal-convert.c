#include <stdio.h>
#include <math.h>

int convert_decimal_2_octal(int decimal_number);
int convert_octal_2_decimal(int octal_number);
int convert_binary_2_octal(long long binary_number); 
long long convert_octal_2_binary(int octal_number);

int convert_decimal_2_octal(int decimal_number) {
    int  octal_number = 0, i = 1;
    while (decimal_number != 0) {
        octal_number += (decimal_number%8) * i;
        decimal_number /= 8;
        i *= 10;
    }
    return octal_number;
}

int convert_octal_2_decimal(int octal_number) {
    int decimal_number = 0, i = 0;
    while (octal_number != 0) {
        decimal_number = (octal_number % 10) * pow(8, i);
        octal_number /= 10;
    }
    return decimal_number;
}

int convert_binary_2_octal(long long binary_number) {
    int octal_number = 0, decimal_number = 0, i = 0;

    while (binary_number != 0) {
        decimal_number += (binary_number % 10) * pow(2, i);
        i++;
        binary_number /= 10;
    }

    i = 1;

    while (decimal_number != 0) {
        octal_number += (decimal_number%8) * i;
        decimal_number /= 8;
        i *= 10;
    }
    return octal_number;
}

long long convert_octal_2_binary(int octal_number) {
    int i = 0, decimal_number = 0;
    long long binary_number;
    while ( octal_number != 0) {
        decimal_number += (octal_number%10) * pow(8, i);
        i++;
        octal_number /= 10;
    }

    i = 1;

    while ( decimal_number != 0) {
        binary_number = (decimal_number%2) *i;
        decimal_number /= 2;
        i *= 10;
    }
    return binary_number;
}

