#include<stdio.h>
#include "a.c"
#define PI 3.14
#define square(r) r*r

int main()
{
 int var = random_number();
 int r = 4;
 printf("This is PI = %f\n", PI);
 printf("%d",var);
 printf("the are of the circle is %f\n", PI *square(r));
   return 0; 
}