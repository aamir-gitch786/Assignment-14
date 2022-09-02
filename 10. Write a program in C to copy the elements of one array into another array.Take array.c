/******************************************************************************
10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,tem,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],copy[n];
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        copy[i]=a[i];//elements are copied into array copy[].
    }
    
    return 0;
}
