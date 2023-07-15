#include <stdio.h>

void print_combinations(int n, int current_digit) {
    if (current_digit > 9) {
        putchar(',');
        putchar(' ');
        return;
    }

    putchar(current_digit + '0');
    putchar(',');
    putchar(' ');

    print_combinations(n, current_digit + 1);

    if (current_digit != n) {
        print_combinations(n, current_digit + 1);
    }
}

int main() {
    print_combinations(9, 1);
    putchar('\n');
    return 0;
}

