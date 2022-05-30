#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter the first number: \n");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    
    switch (a>b)
    {
        case 0:
        printf("%d is maximum",b);
        break;
        
        case 1:
        printf("%d is maximum",a);
        break;
    }
    return 0;
}