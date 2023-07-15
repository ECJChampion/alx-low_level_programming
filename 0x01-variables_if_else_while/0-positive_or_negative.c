#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX and store it in the variable n
    int n = rand();

    // Check if the number is positive, zero, or negative and print the appropriate message
    if (n > 0) {
        printf("The number %d is positive\n", n);
    } else if (n == 0) {
        printf("The number %d is zero\n", n);
    } else {
        printf("The number %d is negative\n", n);
    }

    return 0;
}

