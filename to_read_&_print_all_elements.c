/******************************************************************************
WAP TO READ AND PRINT ALL ELEMENTS OF ARRAY.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,a[5];
    
    for(i=0;i<5;i++)
    {
        printf("Enter the element %d of array: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe elements that u entered were: \n");
    for(i=0;i<5;i++)
    {
        printf("%d,",a[i]);
    }
    return 0;
}
