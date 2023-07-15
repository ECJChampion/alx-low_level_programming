#include <stdio.h>

int main() {
    char ch;

    // Print lowercase alphabet
    for (ch = 'a'; ch <= 'z'; ch++) {
        putchar(ch);
    }

    // Print uppercase alphabet
    for (ch = 'A'; ch <= 'Z'; ch++) {
        putchar(ch);
    }

    // Print a new line
    putchar('\n');

    return 0;
}

