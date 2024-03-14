// Types Of operators in C programming

// We will see about operators implementation in control statement topic 

/*
Uses of Operators:
The following are some common uses for the various kinds of operators in C:

- Calculations in fundamental mathematics are performed 
using the addition and subtraction operators (+ and -).
- If the user wants to do some multiplication and division operations,
 utilize the multiplication and division operators (* and /).
- The remainder of a division operation is obtained using the modulus operator (%).
- Equality and inequality operators (== and!=) are needed to compare values and
 determine whether they are equal or not.
- Use the greater than and less than operators (>and <) to compare values and 
determine if one value is larger than or less than
- A value's relationship to another value may be determined using 
the larger than or equal to and less than or equal to operators (>= and <=).
- A binary number's bits are shifted to the left using the left shift operator (<<).
- A binary number's bits can be shifted to 
the right using the right shift operator (>>).
- Use the logical AND operator (&&) to combine many criteria and
 determine if each condition is true. 
- When combining several criteria, the logical OR operator (||) is used to
 determine if at least one of the conditions is true.
- The logical NOT operator (!) is used to negate a condition's value.
- When two numbers' individual bits are involved, 
the bitwise AND operator (&) is utilized to accomplish the action.
- The bitwise OR operator (|) is employed when two numbers' individual bits are involved.
- Bitwise exclusive OR operator is performed on individual bits of two integers 
using the bitwise XOR operator ().
- Use the bitwise NOT operator () to flip or invert the bits of an integer.
- Use the ternary operator (?:) to assign a value depending on a condition in a compact form.
- A value is assigned to a variable using the simple assignment operator (=).
- The sizeof operator is used to calculate a variable's or data type's size in bytes.
- When evaluating several expressions, 
the comma operator (,) returns the result of the last expression that was evaluated.
*/

/*
Types Of operator Are As follows ;
Arithmetic Operators : + , - , * , / , %
Relational Operators : 
Shift Operators
Logical Operators
Bitwise Operators
Ternary or Conditional Operators
Assignment Operator


Category	             Operator	                              Associativity

Postfix	               () [] ->. ++ - -	                          Left to right
Unary	               + - ! ~ ++ - - (type)* & sizeof	          Right to left
Multiplicative	       * / %	                                  Left to right
Additive	           + -	                                      Left to right
Shift	               << >>	                                  Left to right
Relational	           < <= > >=	                              Left to right
Equality	           == !=	                                  Left to right
Bitwise AND	           &	                                      Left to right
Bitwise XOR	           ^	                                      Left to right
Bitwise OR	           |	                                      Left to right
Logical AND            &&	                                      Left to right
Logical OR	           ||	                                      Left to right
Conditional	           ?:	                                      Right to left
Assignment	           = += -= *= /= %=>>= <<= &= ^= |=	          Right to left
Comma	               ,	                                      Left to right
*/


/*
Arithmetic Operators:
Arithmetic operators carry out fundamental mathematical operations.
 The arithmetic operators in C are as follows:

Addition Operator (+): The addition operator adds two operands together.
Subtraction Operator (-): The second operand is subtracted from the first operand via the subtraction operator.
Multiplication Operator (*): This operator is used to multiply the two operands.
Division Operator (/): The first operand and the second operand are divided using the division operator.
Modulus Operator (%): The modulus operator determines the remainder of the division between two operands.

Relational Operators:
Relational operators assess the relationship between values by comparing them. They return either true (1) or false (0). The relational operators in C are as follows:

Equality Operator (==): If two operands are equal, the equality operator verifies this.
Inequality Operator (!=): The inequality operator determines whether two operands are equal or not.
Greater than Operator (>): The greater than operator determines if the first operand exceeds the second operand.
Less than Operator (<): The less-than operator determines if the first operand less is than the second operand.
Greater than or Equal to Operator (>=): The greater than or equal to operator determines if the first operand is more than or equal to the second operand.
Less than or Equal To Operator (<=): The less than or equal to operator determines if the first operand must be less than or equal to the second operand.

Shift Operators:
A binary number's bits can be moved to the left or right using shift operators. The C shift workers are listed below:

Left Shift Operator (<<): The left shift operator moves the bits of the first operand to the left by the number of places indicated by the second argument.
Right Shift Operator (>>): The right shift operator shifts the bits of the first operand to the right by the number of positions specified by the second operand

Logical Operators:
Logical operators perform logical operations on boolean values and return either true (1) or false (0). Here are the logical operators in C:

Logical AND Operator (&&): The logical AND operator returns true if both operands are true.
Logical OR Operator (||): The logical OR operator returns true if at least one of the operands is true.
Logical NOT Operator (!): The logical NOT operator negates the value of the operand.

Bitwise Operators:
Bitwise operators perform operations on individual bits of the operands. Here are the bitwise operators in C:

Bitwise AND Operator (&): The bitwise AND operator performs a bitwise AND operation on the corresponding bits of the operands.
Bitwise OR Operator (|): The bitwise OR operator performs a bitwise OR operation on the corresponding bits of the operands.
Bitwise XOR Operator (^): The bitwise XOR operator performs a bitwise exclusive OR operation on the corresponding bits of the operands.
Bitwise NOT Operator (~): The bitwise NOT operator flips each bit of the operand.

Ternary or Conditional Operator: The ternary or conditional operator allows you to assign a value based on a condition.

Syntax:

It has the following syntax:

result = condition ? value1 : value2;  
Example:

int a = 5;   
int b = 3;   
int result = (a > b) ? a : b;   
Output:

result = 5

Assignment Operator:
Assignment operators are used to assign values to variables. Here is some of the assignment operator in C:

Simple Assignment Operator (=): The simple assignment operator assigns the value from the right side operands to the left side operands.

Miscellaneous Operator:
The sizeof operator and the comma operator fall under the miscellaneous operator category.

sizeof Operator: The sizeof operator returns the size, in bytes, of a variable or a data type.

Syntax:

It has the following syntax:

result = sizeof(variable / data type);  
Example:

int a;  
int size = sizeof(a);  
Output:

size = 4  // Assuming int occupies 4 bytes

Comma Operator (,): The comma operator evaluates multiple expressions and returns the value of the last expression.

Syntax:

It has the following syntax:

makefileCopy code  
result = (expression1, expression2,..., expressionN);  
Example:

int a = 5, b = 3;  
int result = (a += 2, b *= 2, a + b);  
Output:

result = 15  // a = 7, b = 6, a + b = 13







*/