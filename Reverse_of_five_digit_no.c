// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int num,a,b,c,d,e,f,total;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
    
	e=num%10;
	num = num/10; 
	              			//5
	d = num%10;
	num = num/10;          	//4

	c= num%10;         		//3
	num = num/10;

	b= num%10;        		//2
	num = num/10;

	a= num%10;          //1  
	num = num/10;
	
	
	printf("The reverse is %d%d%d%d%d",e,d,c,b,a);
	
	return 0;
    
}