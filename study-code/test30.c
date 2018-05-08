# include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    /* 函数指针 */
    int (* p) (int, int) = &max; //&可以省略
    int a,b,c,d;

    printf("input:");
    scanf("%d %d %d", &a, &b, &c);
    d = p(p(a, b), c);
    printf("The Max Number is %d\n",d);
    return 0;
}

