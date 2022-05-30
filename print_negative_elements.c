/******************************************************************************
WAP TO PRINT ALL NEGATIVE ELEMENTS OF ARRAY.
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
    printf("\nAll The negative elements are: \n");
    for(i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            printf("%d,",a[i]);
        }
        
    }
    return 0;
}
