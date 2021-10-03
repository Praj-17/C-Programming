#include<stdio.h>

int main()
{
char s1[20], s2[20]; //declare required variables
printf("Enter the string 1 \n ");  //Accept input from user
scanf("%s", &s1);
printf("The concatenated string is %s", s1);
printf("Enter the string 2\n ");  //Accept input from user
scanf("%s", &s2);
printf("The concatenated string is %s", s2);
char *ptr1= s1;     //Set pointer to the base adress of pointers
char *ptr2= s2;

//traverse s1 and reach null charectr
while (*ptr1 != '\0')
{
    ptr1++;
}
while (*ptr2 != '\0')
{
    *ptr1 = *ptr2;
    ptr1++;
    ptr2++;
}
*ptr1 ='\0';
printf("The concatenated string is %s", s1);


 
   return 0; 
}