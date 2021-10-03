
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char s[10];
// char f[10];
// printf("Enter the string\n");
// scanf("%s", &s);
// int n = strlen(s);
// printf("%d\n", n);
// // printf("%s", s);

// for(int i =0; i <(n+1)/2; i++)
// {
//     char temp = s[n-i];
//     s[n-i] = s[i];
//     s[i] = temp;
// }
// for (int i = 0; i < n+1; i++)
// {
//     printf("%c", s[i]);
//     f[i] = s[i];
// }
//   printf("%s", f);


 
//    return 0; 
// }

// #include<stdio.h>
// #include<string.h>

int main()
{
char s1[20];
char s2[20];
printf("Enter the string\n");
scanf("%s", &s1);
int i = 0;
for(i =0; i != '\0'; i++);
for (int j = i-1; j !=0; j--)
{
   s1[j] = s2[i-j -1];
   i--;
}
printf("%s", s2);

   return 0; 
}

