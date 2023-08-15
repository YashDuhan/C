/*Magic Number Program */

#include <stdio.h>
#include <stdlib.h> /*Standard library function to call rand function */

/*
int main()
{
    int magic;
    int guess;

    magic=rand(); //inbuilt function to generate random number
    printf("Guess the number : ");
    scanf("%d",&guess);

    if (guess == magic) {
        printf("That's Right ");
    }
    else{
        printf("Wrong, ");
        if (guess>magic){
            printf("too high");
        }
        else{
            printf("too low");
        }
    }
    return 0;
}
*/

/*Same Program using elseif */

int main()
{
    int magic;
    int guess;

    magic=rand();

    printf("Guess the number: ");
    scanf("%d",&guess);

    if(guess==magic){
        printf("That's right");
        printf("%d is indeed the right number.\nYou're quite lucky.");
    }
    else if(guess>magic){
        printf("Wrong, That's too high");
    }
    else {
        printf("Wrong That's too low");
    }
}