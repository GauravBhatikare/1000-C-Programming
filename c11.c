// Miscelleneous Operators 

# include<stdio.h>

int main()
{
    int a = 5 ;

    printf(" size of element a = %d\n ", sizeof(a));
// "sizeof": The sizeof operator returns the size, in bytes, of a variable or a data type.
    int *ptr;

    printf(" size of *ptr is : %d\n", sizeof(*ptr)); 
    // " *ptr " : its pointer operator 

    int b = 0 ;

    scanf("%d",&b); 
    // " & " : this operator used to denote addess space of assigned variable.
    printf( " value of  b is : %d\n",b);

    return 0;
}