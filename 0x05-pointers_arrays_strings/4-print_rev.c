#include <stdio.h>
#include <string.h>

void print_reverse(const char *str) {
    size_t len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
