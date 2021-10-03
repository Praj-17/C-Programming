#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Random number generation
int random_number()
{
 srand(time(NULL));
  int c = rand()%2;
  return c;
}
int main()
{ 
    int Player_choice , i ;
    char Name[20];
    printf("*****Welcome to Stone paper Scissors game***** \n " );
    printf("May I know your good name pls?\n");
    gets(Name);
   
    int Player_points = 0, CPU_points = 0;
    printf("Pls input \n '0' for Rock \n '1' for Scissors\n '2' for Papers\n");
   for(i = 0; i<10; i++)
   {
          int CPU_choice = random_number();
           printf("\n****Round %d****\n", i+1);
           printf("%s's Turn First\n", Name);
           scanf("%d", &Player_choice);
         
          if( Player_choice ==0 && CPU_choice ==2)
         {
           CPU_points ++; 
           }
         else if( Player_choice ==0 && CPU_choice ==1)
         {
           Player_points++
           ;}
         else if( Player_choice ==1 && CPU_choice ==0)
         {
           CPU_points ++; 
           }
         else if( Player_choice ==1 && CPU_choice ==2)
         {
           Player_points++
           ; }
         else if( Player_choice ==2 && CPU_choice ==0)
         {
           Player_points++
           ; }
         else if( Player_choice ==2 && CPU_choice ==1)
         {
           CPU_points++; }
           printf("The CPU chose %d\n", CPU_choice);

        
   }
    printf("You won %d matches\n ", Player_points);
    printf("CPU won  %d matches\n ", CPU_points);
    printf("%d matches tied\n ", 10-CPU_points-Player_points);

    
  
  
 return 0; 
}