/******************************************************************************
7. Write a program to find second largest in an array.Take array values from the user.

*******************************************************************************/

#include <stdio.h>
#include<limits.h>
int seconde_largest(int [],int n);
int main()
{
    int n,a[n];
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Seconde largest number is %d ",seconde_largest(a,n));
   

    return 0;
}
int  seconde_largest(int a[],int n)
{
    int i,j,largest=INT_MIN,secondelargest=INT_MIN;
    printf("Enter the number :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
        if(largest<a[j])
        {
           
            secondelargest=largest;
             largest=a[j];
        }
        else if(secondelargest<a[j] && a[j]<largest)//important seconde condition
        {
            secondelargest=a[j];
        }
    }
    return secondelargest;
    
    
}