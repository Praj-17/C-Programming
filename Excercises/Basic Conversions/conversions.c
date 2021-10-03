//kms to miles
// inches to feet
//pound to kgs
#include<stdio.h>

int main()
{
int User_input;
printf("Pls enter the choice of conversion\n 1. Kms to miles\n 2.inches to foot");

scanf("%d", &User_input);

switch (User_input)
{
case 1 :
    {
    float km,M;
    printf("Pls input the length in Km");
    scanf("%f", &km);
    M = 1.60934*km;
    printf("The length in Miles is:-  %f", M );
    break;
    }
    

case 2:
    {
        float i, feet;
         printf("Pls input the length in inches");
        scanf("%f", &i);
        feet = 0.0833333*i;
      printf("The length in Feets is:-  %f", feet );
      break;

    }


default:
printf("Pls Enter a valid input");
    
}
return 0;
}