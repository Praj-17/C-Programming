#include<stdio.h>
int main()
{
    char s1[30];
    int len = 0;
    printf("Enter a string\n");
    scanf("%s",s1);
    for(int x= 0;s1[x] != '\0'; x++)
    {
        len++;
    }

    printf("\nThe length of the string is %d", len);
}