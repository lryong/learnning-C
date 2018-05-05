# include <stdio.h>

# define LENGTH 10
# define WIDTH 5
# define NEWLINE '\n'



void test02()
{
    const int LENGTH1 = 10;
    const int WIDTH1 = 5;
    const char NEWLINE1 = '\n';
    int area;

    area = LENGTH1 * WIDTH1;
    printf("value of area:%d\n",area);
    printf("看看newline的值是什么:%c\n",NEWLINE1);
    return;
}

int main() 
{
    int area;
    area = LENGTH * WIDTH;
    printf("value of area:%d\n",area);
    printf("看看newline的值是什么:%c\n",NEWLINE);
    
    test02();
    return 0;
}
