// #include<stdio.h>
// #include<stdlib.h>
// #include<strings.h>
// int* ptr;
//  int len;
// int get_digits(int n, int len)
// {   

    
//     int last_digit = 0;
//     ptr = (int*) malloc(len*sizeof(int));
//     while(n! = 0)
//     {
//          last_digit = n%10;
//          n = n/10;
         
//          for (int i = 0; i <len; i++)
//          {
//              ptr[i] = last_digit;
//          }
//     }
//     return *ptr;
    
// }
// int reverse_array(int arr[])
// {
//    for (int i =0; i<len/2; i++)
//    {
//        ptr[i] = ptr[len-i];
//    }
//    return *ptr;
// }

// int main()
// {
   
//     int n;
//     int ptr1[len],ptr2[len];
// printf("Pls input the length of the number");
// scanf("%d", &len);
// printf("Pls input the number");
// scanf("%d", &n);
// ptr1 = get_digits(n, len);
// ptr2 = reverse_array(ptr);
// printf(" %d", ptr1);
// printf("%d", ptr2);
// if(ptr1 == ptr2)
// {
// printf("It is a palindrome");
// }
// else()
// {
//     printf("IT is not a palindrome")
// }



// }
#include<stdio.h>
int ispalindrome(int n)
{ int reversed = 0;
int o = n;
 while(n !=0)
 {
     reversed = reversed*10 + n%10;
     n = n/10;
 }
 if (o == reversed)
 {
     return 1;
 }
else
 {
     return 0;
 }

}

int main()
{
 int n;
 printf("Pls enter a number");
 scanf("%d", &n);
 if(ispalindrome(n))
 {
     printf("It is a palindrome");
 }
 else
 {
     printf("It is not a palindrome");
 }
   return 0; 
}
 