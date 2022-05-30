// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int amount,a,b,c,d,e,f,total;
    
    printf("Enter the Amount u want :- \n");
    scanf("%d",&amount);
    
    a = amount/100;
    amount = amount%100;
    
    b = amount/50;
    amount=amount%50;
    
    c = amount/10;
    amount=amount%10;
    
    d = amount/5;
    amount=amount%5;
    
    e = amount/2;
    amount=amount%2;
    
    f = amount/1;
    amount = amount%1;
    
    total = a+b+c+d+e+f;
    printf("Smallest total number of notes %d\n",total);
	return 0;
	
	
    
}