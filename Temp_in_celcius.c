// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int temp,C,D;
   printf("Enter the temperature in farenhite: ");
   scanf("%d",&temp);
   C = temp - 32;
   D = C / 1.8;
   printf("Temperature in Centigrade is: %d",D);
    return 0;
}