/******************************************************************************
2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
*******************************************************************************/

#include <stdio.h>
float avg(int []);//Array function declaration
int main()
{
    int a[10];
    printf(" sum of 10 number is :%0.2f ",avg(a));

    return 0;
}
float avg(int b[])
{ int i,sum=0;
  printf("Enter the 10 numbers :");
  for(int i=0;i<=9;i++)
  {scanf("%d",&b[i]);
  sum+=b[i];
  }
  return sum/10.0;
}