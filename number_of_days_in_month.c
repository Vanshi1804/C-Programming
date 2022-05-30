#include<stdio.h>

int main()
{
    int w;
    
    printf("Enter the number of Month(1-12)");
    scanf("%d",&w);
    
    switch (w)
    {
        case 1:
        printf("January\n30days");
        break;
        
        case 2:
        printf("february\n if a leap year then 29 days otherwise 28 days");
        break;
        
        case 3:
        printf("March\n31 days");
        break;
        
        case 4:
        printf("April\n30 days");
        break;
        
        case 5:
        printf("May\n31days");
        break;
        
        case 6:
        printf("June\n30 days");
        break;
        
        case 7:
        printf("July\n31 days");
        break;
        
        case 8:
        printf("August\n30 days");
        break;
        
        case 9:
        printf("September\n31 days");
        break;
        
        case 10:
        printf("October\n30 days");
        break;
        
        case 11:
        printf("November\n31 days");
        break;
        
        case 12:
        printf("December\n30days");
        break;
        
        default:
        printf("Aukaat mai rah k number daal bey");
    }
    return 0;
}