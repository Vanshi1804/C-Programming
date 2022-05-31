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
    
    
    int sum = 0;
    
    
    for(i=0;i<size;i++)
    {
        sum=0;
        for(j=0;j<size;j++)
        {
            
                sum = sum+a[i][j];
            
        }
        printf("The sum of each row is : %d ",sum);
        printf("\n");
    }
    
    for(i=0;i<size;i++)
    {
        sum=0;
        for(j=0;j<size;j++)
        {
            
                sum = sum+a[j][i];
            
        }
        printf("The sum of each column is : %d ",sum);
        printf("\n");
    }
    
    
    return 0;
    
}