#include <stdio.h>
// write a program to print the nth element of the fibonacci series

int fibonacci(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    if (result != -1) {
        printf("The nth element of the Fibonacci series is: %d\n", result);
    }

    return 0;
}
int fibonacci(int n)
{
    if (n <= 0) {
        printf("Invalid input. Please provide a positive integer.\n");
        return -1;
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
