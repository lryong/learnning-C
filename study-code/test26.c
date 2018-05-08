# include <stdio.h>

int main() {
    int var;
    int *ptr;
    int **pptr;

    var = 3000;

    /* 获取var的地址 */
    ptr = &var;

    /* 获取ptr的地址 */
    pptr = &ptr;

    printf("Value of var = %d\n",var);
    printf("Value available of *ptr= %d\n",*ptr);
    printf("Value available of **pptr= %d\n",**pptr);
}
