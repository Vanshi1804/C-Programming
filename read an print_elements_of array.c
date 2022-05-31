#include<stdio.h>

int main()
{
    int m,i,j,n;
    
    printf("Enter the rows and columns of array : ");
    scanf("%d%d",&m,&n);
    
    int a[m][n];
    
    printf("Enter the elements of array : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("The elements that u entered are : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d,",a[i][j]);
        }
    }
    return 0;
}