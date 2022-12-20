#include <stdio.h>
#include <string.h>

int get_string_length(char *string) {
    return strlen(string);
}

int main(void) {
    char string[] = "Hello, world!";
    int length = get_string_length(string);
    printf("The length of the string is: %d\n", length); // Output: 13
    return 0;
}
