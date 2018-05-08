# include <stdio.h>
# include <malloc.h>

int main()
{
    int (*p)[10];
    p =  malloc(sizeof(int *)*2);
    printf("%ld\n",sizeof(p));
    free(p);
    return 0;
}
