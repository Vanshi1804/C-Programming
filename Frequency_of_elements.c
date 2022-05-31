#include<stdio.h>
int main()
{
    int a[5],fq[10]={0},i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    
    
    for(i=0;i<5;i++)
    {
        fq[a[i]]++;
    }
    
    
    for(i=0;i<10;i++)
    {
        if(fq[i]!=0)
        {
            printf("FQ of %d is %d\n",i,fq[i]);
        }
    }
}