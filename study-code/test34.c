# include <stdio.h>
# include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    printf("Memory size occupied by data:%ld\n",sizeof(data));
    data.i = 10;
    data.f = 344.22;
    strcpy(data.str, "C programming");
    /* 对union的不同成员赋值，将会对其他成员重写，原来的值就不存在了*/

    printf(" data.i : %d\n",data.i);
    printf(" data.f : %f\n",data.f);
    printf(" data.str : %s\n",data.str);
    return 0;
}
