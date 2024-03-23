// bitwise operator

#include<stdio.h>

int main()
{
    int a = 2 ;
    int b = 3 ;
    
    printf(" a || b = %d\n", a&b); // & : both values must be true
    printf(" a || b = %d\n", a|b); // | : one value must be true
    printf(" a || b = %d\n", a^b); // ^ (exclusive or): XOR operator is one must be false and other must be true

    return 0; 
}

// true is 1 
// false is 0 

/*

~ : its binary ones complement operator 
>> : its binary right shift operator
<< : its binary left shift operator

*/