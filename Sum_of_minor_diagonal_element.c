#include<stdio.h>
#define size 3

int main()
{
    int a[size][size] ;
    int i,j;
    
    printf("Enter the elements of array %dx%d: ",size,size);
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("The Matrix u entered is \n" );
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("The Minor Diagonal elements are  : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if((i+j)==size-1)
            {
                printf("%d",a[i][j]);
            }
            
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    int sum = 0;
    
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if((i+j)==size-1)
            {
                sum = sum+a[i][j];
            }
        }
        printf("\n");
    }
    printf("the sum of minor Diagonal Matrix Elements is : %d ",sum);
    return 0;
    
}