#include <stdio.h>

int main() {
    char hexDigits[] = "0123456789abcdef";
    int i;

    for (i = 0; i < 16; i++) {
        putchar(hexDigits[i]);
    }

    putchar('\n');
    return 0;
}

