#include <stdio.h>

void main()
{
    int list[20], size, i, element;
    printf("Enter the size of a list : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the integer : ");
        scanf("%d", list[i]);
    }
    printf("Enter the element to be found :");
    scanf("%d", &element);

    for (i = 0; i < size; i++)
    {
        if (element == list[i])
        {
            printf("Element is present in the array at %d index ", i);
            break;
        }
        else if (i == size)
        {
            printf("Give element isn't present in the array");
        }
    }
}