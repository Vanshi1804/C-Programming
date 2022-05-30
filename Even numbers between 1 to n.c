#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    printf("All the even numbers between 1 to n are : ");
    
    for(i=0;i<=n;i++)
    {
        if(i%2 == 0)
        {
            printf("%d,",i);
        }
    }
}