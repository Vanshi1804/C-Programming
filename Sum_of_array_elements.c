/******************************************************************************
Sum of all array elements.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,a[5],sum=0;
    
    for(i=0;i<5;i++)
    {
        printf("Enter the element %d of array: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum+a[i];
    }
    printf("\n The Sum of all array elements is: %d \n",sum);
    return 0;
}
