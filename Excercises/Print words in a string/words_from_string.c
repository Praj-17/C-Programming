#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func1(char * s, int len)
{
    int k = 0;
    while(s[k] != '\0')
    {
        if (s[k] == '\0')
      {
          break;
      }
      while(s[k] != ' ')
      {
          if (s[k] == '\0')
      {
          break;
      }
          printf("%c", s[k]);
          k++;
      }
      printf("\n");
      if (s[k] == '\0')
      {
          break;
      }
      k++;
    }
    printf("\n");
    free(s);
}
int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len =0;
    while(s[len] != '\0')
    {
        len ++;
    }

    func1(s, len);

    //Write your logic to print the tokens of the sentence here.
    return 0;
}