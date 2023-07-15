#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(0));
    n = rand();
    
    int lastDigit = n % 10;

    printf("The string Last digit of %d is ", n);

    if (lastDigit > 5) {
        printf("%d and is greater than 5\n", lastDigit);
    } else if (lastDigit == 0) {
        printf("0\n");
    } else {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }

    return 0;
}

