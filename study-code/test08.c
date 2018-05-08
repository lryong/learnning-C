# include <stdio.h>

int main()
{
    int a = 4;
    short b;
    double c;
    int* ptr;

    /*  sizeof运算符实例 */
    printf("a 's size:%lu\n",sizeof(a));
    printf("b 's size:%lu\n",sizeof(b));
    printf("c 's size:%lu\n",sizeof(c));

    /* & 和 *运算符实例 */
    ptr = &a;
    printf("a's value is %d\n",a);
    printf("*ptr's value is %d\n",*ptr);

    /* 三元运算符 */
    a = 10;
    b = (a ==1)?20:30;
    printf("b's value is %d\n",b);

    b = (a ==10)?20:30;
    printf("b's value is %d\n",b);
}


