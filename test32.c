# include <stdio.h>
# include <string.h>

int test01() {
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\n'};
    printf("Greeting message: %s\n", greeting);
    return 0;
}

int main() {
    // char str1[12] = "Hello";
    char str1[12] = "Hello";
    char str2[12] = "World!";
    char str3[12];
    int len;

    len = strlen(str1);
    printf("strlen(str1): %d\n",len);

    strcpy(str3,str1);
    printf("strcpy(str3, str1) :%s\n",str3);

    strcat(str1,str2);
    printf("strcat(str1, str2) :%s\n",str1);

    len = strlen(str1);
    printf("strlen(str1): %d\n",len);
    test01();
    return 0;
}
