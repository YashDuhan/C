#include <stdio.h>
#include <stdbool.h> //boolean function isn't present in c

bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    else if (a[0] > a[1])
    {
        return false;
    }
    bool smallersorted = is_sorted(a + 1, size - 1);
    return smallersorted;

    /*
    if (smallersorted)
    {
        return true;
    }
    else
    {
        return false;
    }
    */
}

int main()
{
}