/* To check whether a number is divisible by 5 and 11 */

#include <stdio.h>

int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    if((a % 5 == 0) && (a % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }

    return 0;
}