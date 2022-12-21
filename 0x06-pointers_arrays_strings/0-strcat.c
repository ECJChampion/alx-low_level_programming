#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src) {
// Find the end of the dest string
int dest_len = strlen(dest);
// Append the src string to the end of dest
strcpy(dest + dest_len, src);
// Return a pointer to the resulting string
return dest;
}

int main(void) {
char dest[20] = "Hello, ";
char *src = "world!";
printf("%s\n", _strcat(dest, src)); // prints "Hello, world!"
return 0;
}




