#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
 for(int i = 2; i<= sqrt(n); i++)
 {
     if(n%i == 0)
     {
         return 0;
     }
   
 }
   return 1;
}

int main()
{
int a,b;
printf("Enter the first number\n");
scanf("%d", &a);
printf("Enter the second number\n");
scanf("%d", &b);


for (int i = a; i<b; i++)
{
  if(is_prime(i))
  {
      printf("%d ", i);
  }
}
 
   return 0; 
}