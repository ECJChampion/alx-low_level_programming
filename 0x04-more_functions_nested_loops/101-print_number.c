#include <stdio.h>

/* _putchar function (assuming it is defined somewhere) */
int _putchar(char c) {
    /* Your implementation of _putchar here */
    return write(1, &c, 1);
}

/* Recursive function to print a single digit */
void print_digit(int n) {
    _putchar(n + '0');
}

/* Recursive function to print a positive number */
void print_positive_number(int n) {
    if (n / 10 != 0) {
        print_positive_number(n / 10);
    }
    print_digit(n % 10);
}

/* Function to print any integer */
void print_number(int n) {
    if (n == 0) {
        _putchar('0');
    } else if (n < 0) {
        _putchar('-');
        print_positive_number(-n);
    } else {
        print_positive_number(n);
    }
}

int main() {
    int num = 12345;
    print_number(num);
    _putchar('\n');
    return 0;
}

