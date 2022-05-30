#include<stdio.h>

int main()
{
    int w;
    
    printf("Enter the number of week (1-7)");
    scanf("%d",&w);
    
    switch (w)
    {
        case 1:
        printf("Sunday");
        break;
        
        case 2:
        printf("Monday");
        break;
        
        case 3:
        printf("Tuesday");
        break;
        
        case 4:
        printf("Wednesday");
        break;
        
        case 5:
        printf("Thursday");
        break;
        
        case 6:
        printf("friday");
        break;
        
        case 7:
        printf("Saturday");
        break;
        
        default:
        printf("Invalid Number ! Please enter number between 1 to 7");
    }
    return 0;
}