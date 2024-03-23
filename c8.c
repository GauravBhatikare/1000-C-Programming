// logical operator

#include<stdio.h>

int main()
{
    int a = 5 ;
    int b = 3 ;

    printf(" a + b = %d\n", a&&b); // && : condition 1 and condition 2 are true then returns 1
    printf(" a - b = %d\n", a||b); // || : condition 1 or condition 2 are true then returns 1 .
    printf(" a || b = %d\n", !b);   // ! :condition 1 and condition 2 are equals then returns 1

    return 0 ;
}