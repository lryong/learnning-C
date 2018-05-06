#include <stdio.h>

int main() {
    char c;
    int isLowercaseVowel,isUppercaseVowel;

    printf("Input a alpha: ");
    scanf("%c", &c);

    isLowercaseVowel = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel) {
        printf("%c 是元音", c);
    } else {
        printf("%c 不是元音", c);
    }
    return 0;
}

