#include <stdio.h>

int main() {
    for (int i = 0; i <= 9; i++) {
        for (int j = i + 1; j <= 9; j++) {
            int first_digit = i + '0';
            int second_digit = j + '0';

            // Check if 01 and 10 are the same combination
            if (first_digit == '0' && second_digit == '1') {
                continue;
            }

            putchar(first_digit);
            putchar(second_digit);

            // Print ", " if this is not the last combination
            if (i < 8) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}

