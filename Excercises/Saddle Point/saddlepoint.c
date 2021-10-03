#include <stdio.h>
int main()
{
    int r, c;
    printf("Pls input the number of rows in first matrix\n");
    scanf("%d", &r);
    printf("Pls input the number of coloumns in first matrix\n");
    scanf("%d", &c);

    int M1[r][c];

    //INSERTING MATRIX
    printf("Pls provide the values of the matrix\n");
    for (int i = 0; i < r; i++) // row intake
    {
        for (int j = 0; j < c; j++) //columns intake
        {
            printf("Pls input the element at %d  row and %d coloumn\n", i + 1, j + 1);
            scanf("%d", &M1[i][j]);
        }
    }
    printf("The entered matrx is\n"); 
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("  %d   ", M1[i][j]);
        }
        printf("\n");
    }
    int min, max;
    int f;
    for (i = 0; i < r; i++)
    {
        min = M1[i][0];
        c = 0;
        for (j = 0; j < r; j++)
        {
            if (M1[i][j] < min)
            {
                min = M1[i][j];
                c = j;
            }
        }
        max = 0;
        for (int k = 0; k < r; k++)
        {
            if (M1[k][c] > max)
            {
                max = M1[k][c];
            }
        }
        if (min == max)
        {
            printf("Saddle point of matrix is: %d", max);
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("There is no saddle point");
    }
    return 0;
}
