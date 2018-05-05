# include <stdio.h>

const int MAX = 3;
int main() {
    unsigned int var[] = {10,100,200};
    unsigned *ptr;
    int i;

    ptr = var;
    for (i = 0; i < MAX; i++) {
        printf("store addr: var[%d] = %x\n",i,ptr);
        printf("store value: var[%d] = %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}
