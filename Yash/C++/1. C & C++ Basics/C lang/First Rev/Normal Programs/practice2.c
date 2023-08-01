#include <stdio.h>
#include <conio.h>

int main()
{
        int a, b, sum_int, diff_int;
        float c, d, sum_float, diff_float;
        scanf("%d %d", &a, &b);
        scanf("%f %f", &c, &d);
        sum_int = a + b;
        diff_int = a - b;
        sum_float = c + d;
        diff_float = c - d;
        printf("%d%d", sum_int, diff_int);
        printf("%f %f", sum_float, diff_float);
        return 0;
}
