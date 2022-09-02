/******************************************************************************
8. Write a program to find the second smallest number in an array.Take array values
from the user.

*******************************************************************************/

#include <stdio.h>
#include<limits.h>
int seconde_smallest(int [],int n);
int main()
{
    int n,a[n];
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Seconde smallest number is %d ",seconde_smallest(a,n));
   

    return 0;
}
int  seconde_smallest(int a[],int n)
{
    int i,j,smallest=INT_MAX,secondesmallest=INT_MAX;
    printf("Enter the number :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
        if(smallest>a[j])
        {
           
            secondesmallest=smallest;
             smallest=a[j];
        }
        else if(secondesmallest>a[j] && a[j]>smallest)//important seconde condition
        {
            secondesmallest=a[j];
        }
    }
    return secondesmallest;
    
    
}