#include <stdio.h>

void func(int n);

int main()
{
    int aeee[5] = {4, 5, 6, 7, 8};
    func(aeee[3]);
    return 0;
}

void func(int n)
{
    printf("%d", n);
}