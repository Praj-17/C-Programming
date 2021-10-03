#include <stdio.h>
int fib_recursive(int n)
{
    if (n ==1 || n == 2)
    {
        return n-1;
    }
    else
    {
      
    return( fib_recursive(n-1) + fib_recursive(n-2));
    }
}
 int main()
{

   int n ;
   printf("Enter the number to get fibonacci series\n");
   scanf("%d",&n);
   int f = fib_recursive(n);
  printf("Fibonacci of %d is %d", n,f );
  return 0;
}