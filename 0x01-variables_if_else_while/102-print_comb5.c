#include <stdio.h>

void printNumber(int num) {
    putchar((num / 10) + '0');
    putchar((num % 10) + '0');
}

void printCombinations() {
    int num1, num2;
    for (num1 = 0; num1 <= 99; num1++) {
        for (num2 = num1; num2 <= 99; num2++) {
            printNumber(num1);
            putchar(' ');
            printNumber(num2);
            if (num1 != 99 || num2 != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
}

int main() {
    printCombinations();
    return 0;
}

