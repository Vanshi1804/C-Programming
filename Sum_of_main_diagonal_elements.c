#include<stdio.h>
#define size 3

int main()
{
    int arr[size][size];
    int i ,j , sum = 0;
    
    printf("ENter the elements of array of size %dx%d:  ",size,size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<size;i++)
    {
        sum = sum + arr[i][i];
    }
    printf("The sum of main diagonal of matrix is : %d ",sum);
    return 0;
}