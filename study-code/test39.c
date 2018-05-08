# undef FILE_SIZE
# define FILE_SIZE 43

# ifndef MESSAGE
# define MESSAGE "You wish!"
# endif

# ifdef DEBUG
/* 处理语句 */
# endif

# include <stdio.h>

int main() {
    printf("File :%s\n",__FILE__);
    printf("Date :%s\n",__DATE__);
    printf("Time :%s\n",__TIME__);
    printf("Line :%d\n",__LINE__);
    printf("ANSI :%d\n",__STDC__);
}
