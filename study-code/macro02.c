#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)

int main(void) {
    int token99 = 40;
    tokenpaster(99);
    return 0;
}
