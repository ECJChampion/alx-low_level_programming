#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * set_string - a function that sets the value of a pointer to a char
 * @a: pointer to a matrix of integer
 * @size: size of an the square matrix
 *
 * Return: return the sum of the digonal matrix
 */
void set_string(char **s, char *to) {
    // Check if **s is already allocated memory
    if (*s != NULL) {
        free(*s); // Free the old memory to prevent memory leaks
        *s = NULL; // Set the pointer to NULL after freeing
    }

    // Allocate memory for **s and copy the content from *to
    *s = (char *)malloc(strlen(to) + 1); // +1 for the null terminator
    if (*s != NULL) {
        strcpy(*s, to);
    }
}

int main() {
    char *s1 = NULL;
    char *s2 = "Hello, World!";

    set_string(&s1, s2);

    if (s1 != NULL) {
        printf("s1: %s\n", s1);
        free(s1); // Don't forget to free the allocated memory when you're done
    }

    return 0;
}

