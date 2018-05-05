# include <stdio.h>

void test01(void);

int main()
{
    int var = 20;
    int *ip;
    ip = &var;
    printf("Address of var variable: %p\n", &var);

    printf("Address stored in ip variable: %p\n", ip);

    printf("Value of *ip variable: %d\n",*ip);
    test01();
    return 0;
}


void test01()
{
    int *ptr = NULL;
    printf("ptr的值是%p\n",ptr);
    return ;
}
