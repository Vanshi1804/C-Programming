#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter the number :  ");
    scanf("%d",&num);
    
    switch(num%2)
    {
        case 0 :
        printf("The number is even" );
        break;
        
        case 1:
        printf("The number is odd");
        break;
        
        default:
        printf("The number is not applicable .");
    }
    return 0;
}