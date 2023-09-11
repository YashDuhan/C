#include<stdio.h>
#include<string.h>
int main()
{
    /* strcmp is a function used to compare two strings.
    It returns : 0 if strings are equal.
    Negative value if first string's mismatching character's ASCII value is not
    greater than second string's corresponding mismatching character.
    It returns positive values otherwise. */

    char st1[] = "hello";
    char st2[] = "helo";
    int val = strcmp(st1,st2);
    printf("Now the val is %d \n", val);

    return 0;
}
