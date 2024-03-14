// Variables Data Tyeps and their values 

/*
Variables : A variable is the name of the memory location.
 It is used to store information. 
 Its value can be altered and reused several times.

data_type: It represents the type of data the variable can hold. 
Examples of data types in C include int (integer), float (a floating-point number),
 char (character), double (a double-precision floating-point number),
variable_name: It is the identifier for the variable,
 i.e., the name you give to the variable to access its value later in the program. 
 The variable name must follow specific rules, 
 like starting with a letter or underscore and 
 consisting of letters, digits, and underscores.
*/

#include<stdio.h>

int main()
{
    int a = 10;            //          |
    float b = 15.56;       //          |    ----------> variables     
    double d = 25.76789;   //          |
    char c = 'W';          //          |  
    char e[5] = "Ganu"; //  Make sure to include space for the null terminator '\0'
                        //  i.e "Ganu"= 4 but make 5 becoz '\0' is invisible

    printf("The Data types are : %d , %f , %c , %lf , %s", a,b,c,d,e);

    return 0;
}

/*
Variable : value that can change in Data type 

Data Types 
In C programming there are three types 
- primitive    : int , float , character , double , boolean , void , String
- derived      : Array , pointer , function
- User defined : structure , union , enumeration  

- when we execute any application it gets loaded into Ram.
- Inside every application program, we need some memory locations to store the values.
- to store value , we have to create variable
- Before creating variable we have to decide its data type
- every programming language provides set of data type which we can use in our application.
- Ram is Primary Storage

Address Space : Space given to Program file , File remains only in that space

- process cannot access another process . will give Segmentation Fault

int : 4 bytes  : used for whole numbers
char : 1 byte  : used for alphabets
Float : 4 byte : used for numbers having decimal point upto 4 digit
Double : 8 byte : used for numbers having decimal point upto 8 digit
bool : 1 byte : used tell 1 or 0 / yes or No / either this or this / true false
void : used to determine written value of function (used to store function and pointer)
       We cannot create variable type void e.g



Format specifier	                          Description

     %d or %i	                It is used to print the signed integer value 
                                where signed integer means that the variable can hold both positive and negative values.
     %u	                        It is used to print the unsigned integer value 
                                where the unsigned integer means that the variable can hold only positive value.
     %o	                        It is used to print the octal unsigned integer 
                                where octal integer value always starts with a 0 value.
     %x	                        It is used to print the hexadecimal unsigned integer 
                                where the hexadecimal integer value always starts with a 0x value.
                                In this, alphabetical characters are printed in small letters such as a, b, c, etc.
     %X	                        It is used to print the hexadecimal unsigned integer, 
                                but %X prints the alphabetical characters in uppercase such as A, B, C, etc.
     %f	                        It is used for printing the decimal floating-point values. 
                                By default, it prints the 6 values after '.'.
     %e/%E	                    It is used for scientific notation.
                                It is also known as Mantissa or Exponent.
     %g	                        It is used to print the decimal floating-point values,
                                and it uses the fixed precision, i.e., 
                                 the value after the decimal in input would be exactly the same as the value in the output.
     %p	                        It is used to print the address in a hexadecimal form.
     %c	                        It is used to print the unsigned character.
     %s	                        It is used to print the strings.
     %ld	                    It is used to print the long-signed integer value.


Let's see the basic data types. Its size is given according to 32-bit architecture.

Data Types           	Memory Size         	Range
char	                  1 byte	         −128 to 127
signed char	              1 byte	         −128 to 127
unsigned char	          1 byte	          0 to 255
short	                  2 byte	        −32,768 to 32,767
signed short	          2 byte	        −32,768 to 32,767
unsigned short	          2 byte	         0 to 65,535
int	                      2 byte	        −32,768 to 32,767
signed int	              2 byte	        −32,768 to 32,767
unsigned int	          2 byte	         0 to 65,535
short int	              2 byte	        −32,768 to 32,767
signed short int	      2 byte	        −32,768 to 32,767
unsigned short int	      2 byte	         0 to 65,535
long int	              4 byte	        -2,147,483,648 to 2,147,483,647
signed long int	          4 byte	        -2,147,483,648 to 2,147,483,647
unsigned long int	      4 byte	         0 to 4,294,967,295
float	                  4 byte	
double	                  8 byte	
long double	             10 byte
*/
