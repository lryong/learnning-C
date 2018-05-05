# include <stdio.h>

int test_list[];
void assignment();

int main()
{
    double balance[5] = {1000.0,2.0,3.4,7.0,50.0};
    double balance1[] = {1000.0,2.0,3.4,7.0,50.0};
    if (sizeof(balance1) == sizeof(balance))
        printf("数组balance和balance1长度相等");
    else
        printf("数组balance和balance1长度不相等");
    printf("\nbalance的第4个元素是:%f",balance[4]);
    double kali = balance[1];
    printf("\nkali的值是%f",kali);
    print("\n=======================看下test_list的值",test_list);
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
    assignment();
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
    print("\n=======================看下test_list的值",test_list);
    return 0;

}

void assignment() 
{
    int i;
    for (i=0;i<10;i++)
    {
        test_list[i] = 100+i;
    }

    for (i=0;i<10;i++)
    {
        printf("test_list[%d] = %d",i,test_list[i]);
    }
}
        

