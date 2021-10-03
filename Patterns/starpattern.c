#include<stdio.h>
void increasing_star(int n)
{
    for(int i = 0; i<n+1;i++)
    {
        for(int j =0; j<i; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
}
void decreasing_star(int n)
{
    for(int i = 0; i<n+1;i++)
    {
        for(int j =0; j<n-i; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
}



int main()
{
    int user_input, rows;
  printf("Pls input '1' for increasing star pattern and '2' for decreasing star pattern ");
  scanf("%d", &user_input);
  printf("Pls input the number of rows");
  scanf("%d", &rows);


  switch (user_input)
  {
  case 1:
      increasing_star(rows);
      break;
  case 0:
      decreasing_star(rows);
      break;
    
  default:
    printf("Pls enter a vAlid input");
      break;
  }

   return 0; 
}