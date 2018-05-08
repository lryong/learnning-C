# include <stdio.h>

void main()
{
    int a = 4;
    int b = 6;
    bool taka = false;
    if (a > b) {
        printf("a >b");
    } else {
        printf("a < b");
    }
    if ( a && b) {
        printf("\na和b可以同时&运算\n");
    }
    if (!a) {
        printf("!a为true\n");
    }
    if (a || b) {
        printf("a可以||b");
    }
    if (taka) {
        printf("taka为true");
    } else {
        printf("taka为false");
    }
    return;
}

