// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int sci,maths,sst,hindi,english,total,average,percentage;
   
   printf("Enter the marks in Science: \n");
   scanf("%d",&sci);
   printf("Enter the marks in Maths: \n");
   scanf("%d",&maths);
   printf("Enter the marks in SST: \n");
   scanf("%d",&sst);
   printf("Enter the marks in Hindi: \n");
   scanf("%d",&hindi);
   printf("Enter the marks in English: \n");
   scanf("%d",&english);
   total = sci+maths+sst+hindi+english;
   average = total/5;
   percentage = total/500 * 100 ;
   printf("Total is : %d",total);
   printf("average marks are: %d",average);
   printf("Your percentage is : %d""%",percentage);
    return 0;
}