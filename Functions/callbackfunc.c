#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
void greethello(int(*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d", fptr(5,7));
}
void greetgm(int(*fptr)(int, int))
{
     printf("Good morning\n");
    printf("The sum of 5 and 7 is %d", fptr(5,7));
}

int main()

{
 int(*ptr)(int, int);
 ptr = &sum;
 greetgm(ptr);
 greethello(ptr);
   return 0; 
}