#include<stdio.h>
int main()
{
    /* create a 2-d array by taking input from the user. Write a display function
     to print the content of this 2-d array on the screen */

     int rows=3;
     int columns=2;
     int arr[rows][columns];

     for (int i=0; i<rows; i++)
     {
         for (int j=0; j<columns; j++)
         {
             printf("the value at row %d and column %d is\n",i+1,j+1);
             scanf("%d",&arr[i][j]);
         }
     }
     printf("\nThe two dimension array is :- \n");
     for (int i=0; i<rows; i++)
     {
         for (int j=0; j<columns; j++)
         {
             printf("%d\t",arr[i][j]);
         }
         printf("\n");
     }
    return 0;
}
