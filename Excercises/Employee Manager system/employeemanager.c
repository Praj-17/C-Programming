#include<stdio.h>
#include<stdlib.h>
int main()
{ char*ptr;
  int len, i =0;
  ptr = (char*) malloc((len +1)*sizeof(char));
  
 while(i<4)
 {
      printf("Pls enter the length of your ID\n ");
      scanf("%d",&len);
    printf("\nPls enter the charecters of your ID\n");
    scanf ("%s",ptr);
    printf("The charecters you entered are %s\n", ptr);
    free(ptr);
    i +=1;
  }
   return 0; 
}
