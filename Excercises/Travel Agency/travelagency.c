#include<stdio.h>
#include<string.h>

struct Drivers
{
    char Name[20];
    char L_no[10];
    char Route[100];
    int kms;
};
int main()
{
  int n;
  int i;
 
  printf("Pls input the number of drivers\n");
  scanf("%d", &n);
  while(i<n)
  {
      
           char Name[20], L_no[10], Route[100];
           int kms;
            struct Drivers p;
            printf("\nInput your &Name\n");
            p.Name = scanf("%s", &Name);
             printf("Input your Liscence number\n");
            p.L_no = scanf("%s",&L_no);
             printf("Input your Route\n");
            p.Route = scanf("%s", &Route);
             printf("Input your Kms\n");
            p.kms = scanf("%d",&kms);
            //Now printing the data
            printf("Your Name is %s\n", p.Name);
            printf("Your Liscence number is %s\n", p.L_no);
            printf("Your Route is %s\n", p.Route);
            printf("Your travels distance is  %d\n", p.kms);


            
     
      i++;
      
   
  }
   return 0; 
}