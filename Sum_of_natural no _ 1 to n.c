#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum = 0;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++)
    {
        sum = sum + i ;
    }
    
    printf("Sum of all natural numbers between 1 to n : %d ",sum);
    return 0;
}