/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,tot,per;
    printf("Enter m1 ");
    scanf("%d",&m1);
    
    printf("Enter m2 ");
    scanf("%d",&m2);
    
    printf("Enter m3 ");
    scanf("%d",&m3);
    
    printf("Enter m4 ");
    scanf("%d",&m4);
    
    printf("Enter m5 ");
    scanf("%d",&m5);
    
    tot= m1+m2+m3+m4+m5;
    per = tot*100/500;
    
    if (per>=60)
        printf("First division");
        
    if((per>=50)&&(per<60))
        printf("Second division");
    if((per>=40)&&(per<50))
        printf("Third division");
    if(per<40);
        printf("Padh le nalayak,Fail hai tu ");
    
    return 0;
}
