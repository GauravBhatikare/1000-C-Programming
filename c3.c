/*
The printf() and scanf() functions are used for input and output in C language.
Both functions are inbuilt library functions, defined in stdio.h (header file).
*/

#include<stdio.h>

int main()
{
    int B = 0 ;  
    scanf("%d",&B);  // & is used to point out address of variable stored / created

    printf("%d",B);

    return 0;
}
/*
scanf : The scanf() function is used for input.
        It reads the input data from the console.
*/
