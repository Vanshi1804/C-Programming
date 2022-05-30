// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int qty,dis=0;
    float ppi,total;
    
    printf("Enter the Quantity : -");
    scanf("%d",&qty);
    printf("Enter the rate:- ");
    scanf("%f",&ppi);
    
    if(qty > 1000)
        dis = 10;
    
    total= (qty * ppi) - (qty * ppi * dis / 100);
    printf("Total expenses are:- ₹%f\n",total);
    
    return 0;
}