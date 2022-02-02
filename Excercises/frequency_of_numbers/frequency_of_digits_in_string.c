#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int *arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int k =0;
    int j =0;
    // s = 1234567890
    while(s[k] != '\0') //k =0 
    {
        if (s[k]== '\0')
        {
            break;
        }

        for (int j = 0; j < 10; j++) //j =0 
        {
            if (s[k] ==j)  //           1 ==1 
            {
                *(arr+j) +=1;
            }
        }

        if (s[k]== '\0')
        {
            break;
        }
        k++;
    }
 free(s);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}