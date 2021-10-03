
#include<stdio.h>
// 000000
//  11111
//   2222
//    333
//     44
//      5

int main()
{
int n;
printf("Enter the number\n");
scanf("%d", &n);
for(int i = 0; i<n; i++)
{
    for(int j=0; j< n; j++)
    {
    if (i-j>0)
    {
        printf(" ");
    }
    else{
        printf("%d", i);
    }
    
    }
    printf("\n");
}


 
   return 0; 
}