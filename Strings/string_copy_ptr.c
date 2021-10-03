#include<stdio.h>
int main()
{
char s1[10], s2[10]; //declare required variables
printf("Enter the string\n ");  //Accept input from user
scanf("%s", &s1);
char *ptr1= s1;     //Set pointer to the base adress of pointers
char *ptr2= s2;
while (*ptr1 != '\0')
{
    *ptr2 = *ptr1;
    ptr1++;
    ptr2++;
}
*ptr2 = '\0';
printf("The copied string is\n %s", s2);


   return 0; 
}