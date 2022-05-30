/* Maximum among Three numbers */


#include<stdio.h>

int main()
{
    int a,b,c,max;
    
    printf("Enter the first number : ");
    scanf("%d",&a);
    
    printf("Enter the secod number:  ");
    scanf("%d",&b);
    
    printf("Enter the third number: ");
    scanf("%d",&c);
    
     if(a > b)
    {
        if(a > c)
        {
            max = a;
        }
        else
        {
           max = c;
        }
    }
    else
    {
        if(b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("Maximum among all three numbers = %d", max);

    return 0;
}