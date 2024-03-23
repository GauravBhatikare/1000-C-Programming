// assignment operators
#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20; //  " = " : it is assignment operator which assigns value 
                //          from left side oparand to right side operand

    printf("a + b = %d\n", a+b);

    a += 2; // "+=" : this operator adds and assign value from left to right side operand
            //        (add n assignment operator)
    printf("a + b = %d\n", a+b);

     a -= 2; // " -= " : this subtract n assign operator, 
             //          it subtracts and then assign value
    printf("a + b = %d\n", a+b);

    a *= 2; // " *= " : multiply and assign 
    printf("a + b = %d\n", a+b);

    a /= 2; // " /= " : divide and assign
    printf("a + b = %d\n", a+b);

    return 0;
}