#include <stdio.h>

int main()
{
    int limit = 4000000;
    int fib1 = 1, fib2 = 2;
    int even_sum = 0;

    while (fib2 <= limit)
    {
        if (fib2 % 2 == 0)
            even_sum += fib2;

        int next_fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("%d\n", even_sum);

    return 0;
}

