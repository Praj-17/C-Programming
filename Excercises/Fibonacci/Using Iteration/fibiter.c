#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number");
    scanf("%d",n);
    int a = 0 , b = 1 ;
     
        for(int i=0; i<n-1;i++)
        {
          b = a+b;
          a = b-a;
        }
      printf("The fibonacci value is %d \n",a );
    
  
   return 0; 
}