#include <stdio.h>
int main()
{
    char a[30];
    char b[30];
    printf("\nEnter the string a\n");
    scanf("%s", &a);
    printf("\nEnter the string b\n");
    scanf("%s", &b);
    int i, j;
    for (i = 0; a[i] != '\0'; i++);
    for (j = 0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    
    a[i] = '\0';
    printf("The Concatenated string  is %s \n", a);
    return 0;
}
