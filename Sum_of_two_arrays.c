#include<stdio.h>
#define size 3
int main()
{
    int i,j;
    
    int arr[size][size];
    int brr[size][size];
    int crr[size][size];
    
    printf("Enter the elements of first array 3x3 :  ");
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Enter the elements of second array 3x3 :  ");
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    
    printf("Enter the elments of third array 3x3 : ");
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("The sum of both arrays is  :  ");
    
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d",crr[i][j]);
        }
    }
    
    return 0;
    
}