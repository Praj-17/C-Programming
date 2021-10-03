#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char*argv[])
{
char *operation ;
int n1, n2;
operation = argv[1];
n1 = atoi(argv[2]);
n2 = atoi(argv[3]);

if(strcmp(operation, "add") ==0)
{
     printf("%d\n", n1+n2 );
}
if(strcmp(operation, "substract") ==0)
{
     printf("%d\n", n1-n2 );
}
if(strcmp(operation, "multiply") ==0)
{
     printf("%d\n", n1*n2 );
}
if(strcmp(operation, "division") ==0)
{
     printf("%d\n", n1/n2 );
}
   return 0; 
}