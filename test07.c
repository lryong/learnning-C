# include <stdio.h>

int main() {
    unsigned int a = 60;
    unsigned int b = 12;
    int c = 0;
    
    c = a&b;
    printf("c's value:%d\n",c);

    c = a|b;
    printf("c's value:%d\n",c);
    
    c = a^b;
    printf("c's value:%d\n",c);

    c = ~a;
    printf("c's value:%d\n",c);
    
    c = a<<2;
    printf("c's value:%d\n",c);

    c = a>>2;
    printf("c's value:%d\n",c);
    return 0;
}


