/******************************************************************************

9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,tem,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<n/2;i++)
    {
      tem=a[i];
      a[i]=a[n-i-1];
      a[n-i-1]=tem;
    }
    printf("Numbes in reverse order is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
