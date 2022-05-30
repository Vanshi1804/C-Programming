/* The Currentt year and the year in which the employee joined the organization are entered through the keyboard. 
If the number of years for which the employee has served the organization is greater than 3 ,
 then a bonus of ₹2500/- is given to the employee. If the years of service are not greater than 3,then the program should do nothing.*/

#include <stdio.h>

int main() {
    
    int bonus,cy,yoj,yos;
    
    printf("Enter the year of joining: ");
    scanf("%d",&yoj);
    printf("Enter the current year: ");
    scanf("%d",&cy);
    
    yos=cy-yoj;
    
    if(yos>3)
    {
        bonus = 2500;
        printf("Bonus of ₹ %d will be given to u ",bonus);
    }
    
    
    
    return 0;
}