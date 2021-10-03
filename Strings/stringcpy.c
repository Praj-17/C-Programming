#include<stdio.h>
int main()
{
    char a[30];
    char b[30];
    printf("\nEnter the string a\n");
    scanf("%s", a);
    for(int i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    printf("The string b is: ");
    printf("%s", b);
}