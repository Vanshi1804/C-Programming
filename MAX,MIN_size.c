#include<stdio.h>
#define van 5
int main()
{
    int i,max,min,size;
    int array[van];
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d of the array: ",i);
        scanf("%d",&array[i]);
    }
    
    max = array[0];
    min = array[0];
    
    for(i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
        
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    
    printf("The maximum element of the array is %d\n",max);
    printf("The minimum element of the array is %d",min);
    
}