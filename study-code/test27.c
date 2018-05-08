# include <stdio.h>
# include <time.h>

void get_second(unsigned long *par);

int main()  {
    unsigned long sec;
    get_second(&sec);

    printf("Number of seconds: %ld\n",sec);

    return 0;
}

void get_second(unsigned long *par) {
    *par = time( NULL );
    return;
}
    
