#include<stdio.h>
#define vanshi 1000
int main()
{
    int i,size,neg,a[vanshi];
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d of array: ",i);
        scanf("%d",&a[i]);
    }
    
    neg = 0;
    
    for (i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            neg++;
        }
    }
    
    printf("The total number of negative elements are:  %d",neg);
    return 0;
}