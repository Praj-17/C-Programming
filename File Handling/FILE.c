#include<stdio.h>

int main()
{
 FILE *ptr = NULL;
   char string[34];
   ptr = fopen("FILE.txt", "r");
    // fscanf(ptr, "%s",string);
  //  printf("The content of this file has \n %s\n" , string);
  // char c = fgetc(ptr);
  // printf("The charecter i read was %c\n", c);
  // c = fgetc(ptr);
  //  printf("The charecter i read was %c\n", c);
   fgets(string, 8, ptr);
   printf("%s", string);
   return 0; 


   
}