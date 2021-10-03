#include<stdio.h>
void rev_arr(int arr[])
{
 for(int i = 0; i<7/2; i++)
 {
  int temp = arr[i];
   arr[i] = arr [6 - i];
   arr [6 - i] = arr[temp];
 }
 
 
}
int main()
{  
  int arr[] = {1,2,3,54,5,6,7};
  printf("Before Reversing the array\n");
  for(int i = 0; i<7; i++)
  {
    printf("The value of element %d is %d\n", i , arr[i]);

  }
    rev_arr(arr);
  printf("After reversing the array\n");
  for(int i = 0; i<7; i++)
  {
    printf("The value of element %d is %d\n", i , arr[i]);
    
  }
   return 0; 
}