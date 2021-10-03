#include<stdio.h>
#include<stdlib.h>
int main()
{
  //Use of malloc
//   int* ptr;
//   int n;
//   printf("Enter the size of the array you want to create\n");
//   scanf("%d", &n);
//   ptr = (int*) malloc(n*sizeof(int)) ;
//   for(int i =0; i<n; i++)
//   {
//       printf("Pls enter the element %d of this array\n", i+1);
//       scanf("%d", &ptr[i]);
//   }
//    for(int i =0; i<n; i++)
//   {
//       printf("The value at %d of this array is %d\n", i+1, ptr[i]);
     
//   }
//Using calloc 
//callock is generally avoided cause it is less optimal than malloc since it initializes the values to zero
  int* ptr;
  int n;
  printf("Enter the size of the array you want to create\n");
  scanf("%d", &n);
  ptr = (int*) calloc(n, sizeof(int)) ;
  for(int i =0; i<n; i++)
  {
      printf("Pls enter the element %d of this array\n", i+1);
      scanf("%d", &ptr[i]);
  }
   for(int i =0; i<n; i++)
  {
      printf("The value at %d of this array is %d\n", i+1, ptr[i]);
     
  }

  //Use of realloc
printf("Enter the size of the new array you want to create\n");
  scanf("%d", &n);
  ptr = (int*) realloc(ptr, n*sizeof(int)) ;
  for(int i =0; i<n; i++)
  {
      printf("Pls enter the element %d of this array\n", i+1);
      scanf("%d", &ptr[i]);
  }
   for(int i =0; i<n; i++)
  {
      printf("The value at %d of this array is %d\n", i+1, ptr[i]);
     
  }
free(ptr);
   return 0; 
}