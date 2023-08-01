// program to add 2 matrices

#include <stdio.h>

int main()
{
    int i, j, mat1[3][4], mat2[3][4], mat3[3][4], mat_final[3][4];

    // Initialising the first matrix
    printf("Enter the first matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Initialising the second matrix
    printf("Enter the second matrix  : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialising the third matrix
    printf("Enter the third matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat3[i][j]);
        }
    }

    // Addition of all three matrices

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mat_final[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];
        }
    }

    // Printing the sum of all three matrices
    printf("The Resultant matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", mat_final[i][j]);
                }
        printf("\n");
    }
}
