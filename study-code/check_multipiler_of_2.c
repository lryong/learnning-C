# include <stdio.h>

int check_multipiler_2(int num)
{
    return ((num >0) && ((num&(num-1))==0));
    
}

void main()
{
    int resp;
    int input = 33898;
    resp = check_multipiler_2(input);
    if (resp == 1) {
        printf("input is the multipiler of 2");
    } else {
        printf("input is not the multipiler of 2");
    }

}
