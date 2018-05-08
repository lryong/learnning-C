# include <stdio.h>
# include <limits.h>
# include <float.h>

// 变量声明
extern int a,b;
extern int c;
extern float f;

void test01() {
    int a,b;
    int c;
    float f;

    a =10;
    b = 20;
    c = a+b;
    printf("变量c为：%d\n",c);

    f= 70.0/3.0;
    printf("变量f为：%f\n",f);
}

void test03() {
    int a;
    int b;
    printf("a的地址是%p\nb的地址是%p\n",&a,&b);
}

int main() 
{
    /*我的第一个C程序 */
    printf("Hello,World! \n");
    int age = 223;
    printf("输入的age是%d：",age);
    printf("int 存储大小：%lu \n",sizeof(int));
    printf("float 存储最大字节数:%lu \n",sizeof(float));
    printf("float 最大值是%E\n",FLT_MAX);
    printf("float 最小值是%E\n",FLT_MIN);
    printf("float 精度值%d\n",FLT_DIG);
    printf("====================\n");
    test01();
    test03();
    printf("====================");
    return 0;
}
