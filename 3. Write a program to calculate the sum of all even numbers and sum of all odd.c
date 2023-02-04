/******************************************************************************
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*******************************************************************************/

#include <stdio.h>
void Even_odd(int []);//Array function declaration

int main()
{
    int a[10];
    Even_odd(a);
    printf(" Sum of all even numbers is : %d \n Sum of all odd numbers :%d ",a[0],a[1]);

    return 0;
}
void  Even_odd(int b[])
{ int i,sum1=0,sum2=0;
  printf("Enter the 10 numbers :");
  for(int i=0;i<=9;i++)
  {scanf("%d",&b[i]);
  if(b[i]%2==0)
  sum1+=b[i] ;
  else
  sum2+=b[i] ;
  }
  b[0]=sum1;
  b[1]=sum2;
  
  
}
