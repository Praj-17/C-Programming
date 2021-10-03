#include<stdio.h>
#include<string.h>

int main()
{
char s1[20];
char s2[20];
printf("Enter the string\n");
scanf("%s", &s1);
printf("The entered string is\n %s\n", s1);
char *ptr1  =s1;
char *ptr2  =s2;
int i = 0;
int j = 0;


for ( ;i < *ptr1 !='\0'; i++);

for (j = i-1 ;j>=(i+1)/2; i--)
{
    *ptr2= *ptr1; 
    ptr1++; 
    ptr2++; 
    j++;
}
 
printf("The reversed string is\n %s", s2);
   return 0; 
}