#include <assert.h>
#include <stdio.h>

int main() {
    int a;
    char str[50];

    printf("Input a int:");
    scanf("%d", &a);

    assert(a >= 10);
    printf("Your input int is :%d\n", a);

    printf("Input a char:");
    scanf("%s", str);

    assert( str != NULL);
    printf("Your input char is :%s\n", str);
    return 0;
}
