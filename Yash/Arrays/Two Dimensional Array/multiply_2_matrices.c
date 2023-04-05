/*This code isn't working, pls don't mind*/

#include <stdio.h>

#define ROW1 3 // declared the Row 1 = 3
#define COL1 4
#define ROW2 COL1
#define COL2 2

int main()
{
    int mat1[ROW1][COL1], mat2[ROW2][COL2], mat_final[ROW1][COL2];

    // Initialising the first array
    printf("Enter the elements for first array : \n");
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Initialising the second array
    printf("Enter the elements for second array : \n");
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Multiplication of both the arrays

    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            mat_final[i][j] = 0;
            for (int k = 0; k < COL1; k++)
            {
                mat_final[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("The resultant matrix is : \n");
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            printf("%5d", mat_final[i][j]);
        }
        printf("\n");
    }
}
