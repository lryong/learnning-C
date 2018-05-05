# include <stdio.h>

double getAverage(int *arr,int size)
{
    int i;
    int sum = 0;

    for (i =0;i<size;i++) 
    {

        printf("---->:%d\n",*(arr+i));
        sum+=*(arr+i);
        printf("cat the sum:%d\n",sum);
    }
    return sum/size;
}

int main()
{
    int balance[5] = { 1000,2,3,17,50};
    double avg;
    avg = getAverage(&balance[0],5);
    printf("get its average:%f",avg);
}
