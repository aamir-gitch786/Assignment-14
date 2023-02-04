/******************************************************************************
8. Write a program to find the second smallest number in an array.Take array values
from the user.

*******************************************************************************/

#include <stdio.h>

void Sort(int []);//function declaration.
void main()
{
   int a[10];
   Sort(a);
  

    
}
void Sort(int b[])
{ int i,j,tem;
printf("Enter the 10 values : ");
for(i=0;i<=9;i++)
 {
    scanf("%d",&b[i]);
 }
 // for sorting the elements
 for(i=0;i<=9;i++)
 { tem=b[i];
    for(j=i+1;j<=9;j++)
    { 
        if(b[i]>b[j])
        {
            tem=b[i];
            b[i]=b[j];
            b[j]=tem;
        }
    }

 }
 printf(" Seconde smallest element is %d ",b[1]);
 
 
}
