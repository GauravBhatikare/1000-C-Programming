// Relational operators
#include<stdio.h>

int main()
{
  int A = 20 ;
  int B = 20 ;
  int C = 30 ;
  int ans = 0;

  if (A == C)
  {
    printf(" 1 \n ");
  }
  else if (C <= B )
  {
    printf(" 2 \n");
  }else if( A >= C)
  {
    printf(" 3 \n"); 
  }else if( C % A )
  {
    printf(" %d\n", ans );
  }
  else if (A != B)
  {
     printf(" 5 \n");
  }
  return 0;
  
}