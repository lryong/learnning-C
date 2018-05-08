# include <stdio.h>

int main()
{
    double *p;
    double balance[10] = { 1000.0,2.0,3.4,17.0,50.0};
    int i;

    p = balance;
    printf("使用指针的数组值\n");
    for (i = 0;i<10; i++)
    {
        printf("*(p+%d):%f\n",i,*(p+i));
    }

    printf("使用balance的数组值\n");
    for ( i=0;i<10;i++)
    {
        printf("*(balance+%d):%f\n",i,*(balance+i));
        printf("balance的值是啥%f\n",balance[i]);
    }
    return 0;
}
