# include <stdio.h>
# include <string.h>

struct {
    unsigned int age:3;
} Age;

int main() {
    Age.age = 4;
    printf("Sizeof(Age) : %ld\n",sizeof(Age));
    printf("Age.age : %d\n",Age.age);

    Age.age = 7;
    printf("Age.age : %d\n",Age.age);

    // 超过位域的范围
    Age.age = 8;
    printf("Age.age : %d\n",Age.age);
}
