
            // NUMBER GUESSING GAME //

#include<stdio.h>
#include<stdlib.h>          // this library is used to generate random number
#include<time.h>

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
                                // rand() generates a random number from 0 to infinity
    number = rand()%100 + 1;    //generates a random number between 1 and 100

//    printf("the number is %d\n\n",number);
    // keep running the loops until the number is guessed

    do
    {
        printf("guess the number between 1 to 100 : ");
        scanf("%d", &guess);
        if(guess>number)
        {
            printf("lower number please\n");
        }
        else if (guess<number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("\n\nwoooh!!\n");
            printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }
    while(guess!=number);
    return 0;
}
