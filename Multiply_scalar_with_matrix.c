#include<stdio.h>
#define size 3
int main()
{
    int i , j,num;
    int arr[size][size];
    
    printf("Enter the elements in matrix of size %dx%d : ",size,size);
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Enter the the scalar number to be multiplied by matrix : ");
    scanf("%d",&num);
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            arr[i][j] = num * arr[i][j];
        }
    }
    printf("The result after scalar multiplication is : ");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}