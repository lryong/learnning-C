# include <stdio.h>
# include <malloc.h>

int main() 
{
    int i;
    void *p[10];
    printf("%ld\n", sizeof(p));
    for (i=0;i<10;++i)
    {
        p[i] = malloc(sizeof(int)*i);
    }

    for ( i=0; i<10; ++i)
    {
        free(p[i]);
    }
}
