// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int length,breadth,perimeter,radius,area,ac,pc;
   printf("Enter the length of the rectangle: \n");
   scanf("%d",&length);
   printf("Enter the breadth of the rectangle : \n");
   scanf("%d",&breadth);
   printf("Enter the radius of the circle: \n");
   scanf("%d",&radius);
   area = length * breadth;
   perimeter = 2 * (length+breadth);
   ac = 3.14*radius*radius;
   pc = 2*3.14*radius;
   printf("Area of the rectangle is : %d\n",area);
   printf("Area of the circle is : %d\n",ac);
   printf("Perimeter of the rectangle is : %d\n",perimeter);
   printf("Circumference of the circle is : %d\n",pc);
   return 0;
}