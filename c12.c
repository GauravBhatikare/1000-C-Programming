// Shift Operators 

#include <stdio.h>

int main() 
{
    int number1 = 5; // Binary representation: 0000 0101

    // Left shifting 'number' by 2 positions
    int result1 = number1 << 2; // Binary representation after left shift: 0001 0100 (20 in decimal)

    printf("Original number: %d\n", number1);
    printf("After left shift by 2 positions: %d\n", result1);

    int number2 = 20; // Binary representation: 0001 0100

    // Right shifting 'number' by 2 positions
    int result2 = number2 >> 2; // Binary representation after right shift: 0000 0101 (5 in decimal)

    printf("Original number: %d\n", number2);
    printf("After right shift by 2 positions: %d\n", result2);

    return 0;
}
/*
to find any no binary , divide the no by 2 
i.e eg : 20 binary is  20 / 2 = 10 : remainder is 0
                       10 / 2 = 5  : rem 0
                       5  / 2 = 2.5 ( i.e 2) : rem 1 
                       if there 0.5 then its converted to whole no i.e 0
                       2 / 2 = 0 : rem 0 
        
        now the Binary of 20 is = 0 0 1 0
*/