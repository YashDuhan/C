#include<stdio.h>
int main()
{
    //take four numbers as input from the user and find the greatest number

    float num1, num2, num3, num4;

    printf("enter 1st number : ");
    scanf("%f",&num1);
    printf("enter 2nd number : ");
    scanf("%f",&num2);
    printf("enter 3rd number : ");
    scanf("%f",&num3);
    printf("enter 4th number : ");
    scanf("%f",&num4);

    printf("\n\n\n");

    if (num1>num2)
    {
        if (num1>num3)
        {
            if (num1>num4)
            {
                printf("%f is the greatest number\n\n", num1);
            }
            else
            {
                printf("%f is the greatest number\n\n", num4);
            }
        }
        else if (num3>num4)
        {
            printf("%f is the greatest number\n\n", num3);
        }
        else
        {
            printf("%f is the greatest number\n\n", num4);
        }
    }
    else if (num2>num3)
    {
        if (num2>num4)
        {
            printf("%f is the greatest number\n\n", num2);
        }
        else
        {
            printf("%f is the greatest number\n\n", num4);
        }
    }
    else if (num3>num4)
    {
        printf("%f is the greatest number\n\n", num3);
    }
    else
    {
        printf("%f is the greatest number\n\n", num4);
    }


    return 0;
}
