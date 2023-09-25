#include<stdio.h>
int main()
{
    /* calculate income tax paid by an employee to the government
    as per the slabs mentioned below:
            income slab     tax
            2.5L - 5L       5%
            5L - 10L        20%
            above 10L       30%

    note that that there is no tax below 2.5L. take income tax as an input from the user*/


    float income;
    float tax=0;
    printf("enter your income = ");
    scanf("%f",&income);

    if (income < 250000)
    {
        tax = 0;
    }
    else if (income>=250000 && income<=500000)
    {
        tax = tax + (0.05 * (income - 250000));
    }
    else if (income>500000 && income<=1000000)
    {
        tax = tax + 0.20 * ((income - 500000));
    }
    else if (income>1000000)
    {
        tax = tax + (0.30 * (income - 1000000));
    }

    printf("\n\ntax paid by the employee is %.2f rupees.\n\n", tax);


    return 0;
}
