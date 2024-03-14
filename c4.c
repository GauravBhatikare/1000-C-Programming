// Arithmatic Operator : " + , - , * , /"

#include<stdio.h>
int Addition;

int main()
{
    int A = 60 ;
    int B = 20 ;
    int Ans = 0 ;
    
    Ans = A + B ; // Addition Operator

    printf("%d\n",Ans ); // %d is access specifier

    Ans = A - B ; // Subtraction Operator 

    printf("%d\n",Ans ); // In this , \n is used for next line 

    Ans = A * B ; // // Multiplication Operator

    printf("%d\t", Ans ); // in this , \t is used for Space between Output

    Ans = A / B ; // Division Operator

    printf("%d\n", Ans );

    Ans = A % B ; // "%" : It is Modulus Operator

    printf("%d\n", Ans );

    return 0; 
}

