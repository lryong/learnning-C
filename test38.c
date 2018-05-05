# include <stdio.h>

void f_puts() {
    FILE *fp = NULL;
    
    fp = fopen("/tmp/test.txt","w+");
    fprintf(fp,"This is testing for fprintf...\n");
    fputs("This is test by lryong!!!\n",fp);
    fclose(fp);
}

void f_gets() {
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("/tmp/test.txt","r");
    fscanf(fp,"%s",buff); // 遇到第一个空格字符时就停止读取
    printf("1: %s\n",buff);

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n",buff);

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n",buff);

    fclose(fp);
}

int main() {
    f_gets();
    // f_puts();
}

// 二进制IO函数：fread,fwrite
