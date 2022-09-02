/******************************************************************************
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
*******************************************************************************/

#include <stdio.h>
int sum(int []);//Array function declaration
int main()
{
    int a[10];
    printf(" sum of 10 number is :%d ",sum(a));

    return 0;
}
int sum(int a[])
{ int i,sum=0;
  printf("Enter the 10 numbers :");
  for(int i=0;i<=9;i++)
  {scanf("%d",&a[i]);
  sum+=a[i];
  }
  return sum;
}