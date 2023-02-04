/******************************************************************************

6. Write a program to sort elements of an array of size 10. Take array values from the
user.

*******************************************************************************/

#include <stdio.h>
void Sort(int []);//function declaration.
int main()
{
   int a[10];
   Sort(a);
  

    return 0;
}
void Sort(int b[])
{ int i,j,tem;
printf("Enter the 10 values : ");
for(i=0;i<=9;i++)
 {
    scanf("%d",&b[i]);
 }
  printf("Sorted elements are  : ");
 for(i=0;i<=9;i++)
 { 
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
     for(i=0;i<=9;i++)
 {
    printf("%d ",b[i]);
 }
 
}
