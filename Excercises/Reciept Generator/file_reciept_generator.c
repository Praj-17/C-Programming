#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * replaceword(const char* str,const  char* oldword, const char*newword)
{
    char* result_string;
    int i =0 , count = 0;
    int(newwordLen) = strlen(newword);
    int(oldwordLen) = strlen(oldword);
    for(i = 0; i!='\0'; i++)
    {
      if(strstr(&str[i], oldword) == &str[i])
      {
         count++;
         //jump over this word
          i = i+ oldwordLen -1;
      }
    }
    //Making a new string to fit instead of replaced words
    result_string = (char*) malloc(i+ count* sizeof(newwordLen -oldwordLen) + 1);
     i = 0;
     while (*str)
     {
       //compare the substring with result
       if(strstr(str, oldword) ==str)
       {
          strcpy(&result_string[i], newword);
          i+= newwordLen;
          str+= oldwordLen;
       }
       else
       {
          result_string[i] = *str;
          i+=1;
          str+=1;
       }
       result_string =  '\0';
      
     }
      return result_string;
     
     
    

}

int main()

{
  FILE* ptr = NULL;
  FILE* ptr2 = NULL;
  ptr = fopen("Bill.txt", "r");
  ptr2 = fopen("Gen_BILL.txt", "rw");
  char str[200];
  fgets(str, 200, ptr);
  printf("The given bill template was\n %s\n", str);
  char* newStr;
  newStr = replaceword(str, "{{Item}}", "Shoes");
  newStr = replaceword(newStr, "{{Outlet}}", "Praj Outlet");
  newStr = replaceword(newStr, "{{Name}}", "Prajwal");
  printf("The actual bill generated is: \n %s\n", newStr);
  fprintf(ptr2, "%s", newStr);
  fclose(ptr); fclose(ptr2);




 
   return 0; 
}