#include<stdio.h>
#define size 3
int main()
{
    int i,j,vanshi;
    
    int arr[size][size];
    int brr[size][size];
    
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
    
    
    vanshi = 1;

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(arr[i][j] != brr[i][j])
            {
                vanshi = 0;
                break;
            }
        }
    }

    if(vanshi == 1)
    {
        printf("\nMatrix A is equal to Matrix B");
    }
    else
    {
        printf("\nMatrix A is not equal to Matrix B");
    }
    
    
    return 0;
    
}