#include <stdio.h>

void print_diagsums(int *a, int size) {
    int diag1 = 0, diag2 = 0;

    for (int i = 0; i < size; i++) {
        diag1 += a[i * size + i];
        diag2 += a[i * size + (size - i - 1)];
    }

    printf("%d %d\n", diag1, diag2);
}
