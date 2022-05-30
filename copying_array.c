#include<stdio.h>
#define copy 100

int main()
{
    int i,a[copy],b[copy],size;
    
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d of array:  ",i);
        scanf("%d",&a[i]);
    }
    printf("Array before copying : ");
    
    for(i=0;i<size;i++)
    {
        printf("%d,",a[i]);
    }
    
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    
    printf("\nArray after copying is : ");
    
    for(i=0;i<size;i++)
    {
        printf("%d,",b[i]);
    }
    return 0;
}