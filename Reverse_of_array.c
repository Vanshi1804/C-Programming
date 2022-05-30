#include<stdio.h>
#define van 1000

int main()
{
    int i,size,a[van];
    
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d of array : ",i);
        scanf("%d",&a[i]);
    }
    
    printf("Your first array : ");
    
    for(i=0;i<size;i++)
    {
        printf("%d,",a[i]);
    }
    
    printf("\nArray after reversing : ");
    for(i=size-1;i>=0;i--)
    {
        printf("%d,",a[i]);
    }
    return 0;
    
}