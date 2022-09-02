/******************************************************************************

5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.

*******************************************************************************/

#include <stdio.h>
int smallest(int []);//function declaration.
int main()
{
   int a[10];
   printf("The smallest number stored in this array is : %d",smallest(a));

    return 0;
}
int smallest(int b[])
{ int i,j,keep;
    printf("Enter the 10 vlaues : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=9;i++)
    {
        
        keep=b[i];
        for(j=1;j<=9;j++)
        {
            if(keep>b[j])
            keep=b[j];
            
        }
    }
    return keep;
}