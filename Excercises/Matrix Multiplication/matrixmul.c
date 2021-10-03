#include<stdio.h>
int main()
{int r1 , c1,c2,r2;
 printf("Pls input the number of rows in first matrix\n");
 scanf("%d",&r1 );
 printf("Pls input the number of coloumns in first matrix\n");
scanf("%d",&c1 );
 printf("Pls input the number of rows in Second matrix\n");
scanf("%d",&r2 );
 printf("Pls input the number of coloumns in Second matrix\n");
scanf("%d",&c2 );
int M1[r1][c1];
int M2[r2][c2];
int M3[r1][c2];
int sum = 0;
//INSERTING MATRICES
printf("Pls provide the values of first matrix\n");
for(int i = 0; i<r1; i++) // coloumns intake
{
    for(int j = 0; j<c1; j++) //rows intake
    {
       printf("Pls input the element at %d  row and %d coloumn\n", i+1 ,j+1);
        scanf("%d", &M1[i][j]);
    }
}
printf("Pls provide the values of Second matrix\n");

for(int i = 0; i<r2; i++) // coloumns intake
{
    for(int j = 0; j<c2; j++) //rows intake
    {
        printf("Pls input the element at %d  row and %d coloumn \n", i+1 , j+1);
        scanf("%d", &M2[i][j]);
    }
}
//PRINTING MATRICES

for(int i = 0; i<r1; i++) // coloumns printing
{
    for(int j = 0; j<c1; j++) //rows printing
    {
        printf(" The elememt at %d row and %d coloumn of first matrix is %d\n",i,j, M1[i][j]);
    }
}
for(int i = 0; i<r2; i++) // coloumns printing
{
    for(int j = 0; j<c2; j++) //rows printing
    {
       printf(" The elememt at %d row and %d coloumn of seconf matrix is %d\n",i,j, M2[i][j]);
    }
}



for(int o =0; o<r1; o++)
{
    for(int p =0; p<c2;p++)
    { 
        for(int r=0; r<r2;r++)
        {
        sum+= M1[o][r]*M2[r][p];
        }
        M3[o][p] =0;
        sum =0;
    }
}
for(int i = 0; i<r1; i++) // coloumns printing
{
    for(int j = 0; j<c2; j++) //rows printing
    {
        printf(" The elememt at %d row and %d coloumn of FINALmatrix is %d\n",i,j, M3[i][j]);
    }
}


}

// if(c1 ==r2) // to check if they are multipliable
// {
 
//    for(int i =0; i <c2;i++) // traversing  in m2s coloumns
//    {
//     for(int j =0; j<r2; j++) // travesing in m2s rows
//     {
//         for(int k=0; k<c1;k++) //traversing in m1s coloumns
//         {
//           for(int l =0; l<r1; l++) //traversing in m1s rows
//           {
//             for(int m =0; m<c2;m++)// traversing through m3s coloumns
//             {
//                 for(int n =0; n<r1; n++) //traversing throgh m3s rows
//                 {
//                    M3[n][m] = M2[j][i]*M1[l][k];
                  
//             }
             
//           }
          
//         }
//     }
//    return 0; 
// }