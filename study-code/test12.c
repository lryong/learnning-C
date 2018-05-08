# include <stdio.h>

int max(int num1, int num2)
{
    int result;
    if (num1 > num2) 
        result = num1;
    else
        result = num2;
    return result;
}

int min(int num1,int num2)
{
    int a=4,b=5;
    printf("可以在一条语句里面定义两个变量a:%d和b:%d",a,b);
}

int main()
{
    int a = 31;
    int b = 4;
    int result;
    result = max(a,b);
    printf("拿到的结果是:%d",result);
    min(a,b);
    return 0;
}

