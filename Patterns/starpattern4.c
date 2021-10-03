#include<stdio.h>

int main()
{
int n;
printf("Enter the number\n");
scanf("%d", &n);
int j =0;
for (int i = 0; i< n; i++)
{
    for ( j = 0; j <n; j++)
    { 
      if (i-j >0)
      {
          printf(" ");
      }
      else{
          printf("*");
      }
    }
    printf("\n");
}

 
   return 0; 
}