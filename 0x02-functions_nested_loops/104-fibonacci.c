#include <stdio.h>

void print_fibonacci(int n)
{
    int fib1 = 1, fib2 = 2;

    if (n >= 1)
        printf("%d", fib1);

    if (n >= 2)
        printf(", %d", fib2);

    for (int i = 3; i <= n; i++)
    {
        int next_fib = fib1 + fib2;
        printf(", %d", next_fib);
        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("\n");
}

int main()
{
    int n = 98;
    print_fibonacci(n);

    return 0;
}

