# include <stdio.h>

int test(int,int); //行参，只声明

int main()
{
    // int a,b;
    printf("%d",test(4,6));
}

int test(int a,int b)
{
    a = a+b;
    return a;
}
