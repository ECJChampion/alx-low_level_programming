#include <stdio.h>

void print_digit_combinations() {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            for (int k = j + 1; k < 10; k++) {
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);
                putchar(','); putchar(' ');
            }
        }
    }
}

int main() {
    print_digit_combinations();
    return 0;
}

