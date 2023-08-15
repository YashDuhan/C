/*Program to check vowel or consonant using switch cases*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);
    /*Switch Cases */
    switch(ch)
    {
            case 'a':
            case 'A':
        printf("Vowel");
        break; /*break is used to close the loop at once and stop checking*/
            case 'e':
            case 'E':
        printf("Vowel");
        break;
            case 'i':
            case 'I':
        printf("Vowel");
        break;
            case 'o':
            case 'O':
        printf("Vowel");
        break;
            case 'u':
            case 'U':
        printf("Vowel");
        break;
            default:/*default is used when the variable doesn't match any case statement*/
        printf("Consonant");
        
        return 0;
    }
}