#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * split a string into words
 * @size: number of bytes
 * @c: and array of characters
 * Return: Null if size is 0
 */
char **strtow(char *str) {
    if (str == NULL || str[0] == '\0') {
        return NULL; // Return NULL if the input is NULL or an empty string
    }

    // Count the number of words
    int word_count = 0;
    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    // Allocate memory for the array of strings
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL; // Memory allocation failed
    }

    // Split the string into words
    char *token = strtok(str, " ");
    int i = 0;
    while (token != NULL) {
        words[i] = strdup(token); // Duplicate the token
        if (words[i] == NULL) {
            // Memory allocation failed for a word, free previously allocated memory and return NULL
            for (int j = 0; j < i; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        i++;
        token = strtok(NULL, " ");
    }

    words[i] = NULL; // Set the last element to NULL to terminate the array
    return words;
}

int main() {
    char *input = "Hello World";
    char **words = strtow(input);
    
    if (words != NULL) {
        for (int i = 0; words[i] != NULL; i++) {
            printf("Word %d: %s\n", i + 1, words[i]);
            free(words[i]); // Free memory for individual words
        }
        free(words); // Free memory for the array of strings
    } else {
        printf("Input is NULL or empty.\n");
    }

    return 0;
}

