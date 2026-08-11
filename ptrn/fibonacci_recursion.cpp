#include <stdio.h>

// Recursive function to compute nth Fibonacci number
unsigned long long fib(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    // Recursive case
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %llu\n", n, fib(n));
    return 0;
}