#include<Stdio.h>

/* create an array of size 3 x 10 containing multiplication tables of
    the numbers 2, 7 and 9 respectively. */
void printTable(int *mulTable, int num)
{
    printf("The multiplication table of %d is : \n",num);
    for (int i=0; i<10; i++)
    {
        mulTable[i]=num*(i+1);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d x %d = %d\n",num, i+1, mulTable[i]);
    }
            printf("************************************************************\n\n");

}
int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2);
    printTable(mulTable[1], 7);
    printTable(mulTable[2], 9);
    return 0;
}
