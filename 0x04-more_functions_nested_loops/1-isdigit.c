#!/bin/bash
#include <ctype.h>

int main() {
    char c = '5';
    if (_isdigit(c)) {
        printf("The character '%c' is a digit.\n", c);
    } else {
        printf("The character '%c' is not a digit.\n", c);
    }
    return 0;
}
