# include <stdio.h>

void getchar_and_putchar() {
    int c;
    printf("Enter a value:");
    c = getchar();
    printf("\nYou entered: ");
    putchar(c);
    printf("\n");
}

/*
void gets_and_puts() {
    char str[100];
    printf("Enter a value:");
    gets(str); //gets有安全问题
    printf("\nYou entered:");
    puts(str);
}
*/

void printf_and_scanf() {
    char str[100];
    int i;
    printf("Enter a value:");
    scanf("%s %d",str,&i);

    printf("\nYou entered: %s %d ",str,i);
    printf("\n");
}

int main() {
    printf_and_scanf();
}


