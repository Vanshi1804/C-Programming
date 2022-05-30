#include<stdio.h>
#define vanshi 1000
int main()
{
    int i,size,a[vanshi],even,odd;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d of the array: ",i);
        scanf("%d",&a[i]);
    }
    
    even = 0;
    odd = 0;
    
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The number of even elements is : %d\n",even);
    printf("The number of odd elements is : %d",odd);
    return 0;
}