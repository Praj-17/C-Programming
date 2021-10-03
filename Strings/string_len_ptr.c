#include<stdio.h>

int main()
{
int len =0;
char s1[10];
char *ptr;
printf("Enter the value of string 1\n"); //declare variable
scanf("%s",&s1); // Accept input from user
printf("The entered string is\n");
printf("%s\n", s1);
ptr = s1; //set pointer to the forst index of array

while (*ptr != '\0') //intitialize while loop till end of array and increamet len and ptr;
{
    len++;
    ptr++;
}
printf("The length of the string is\n%d", len);

//display output
   return 0; 
}