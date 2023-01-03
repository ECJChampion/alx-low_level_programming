#include <stdio.h>
#include <string.h>

int main(void) {
  char haystack[100] = "Hello, world!";
  char needle[20] = "world";

  char *substring = _strstr(haystack, needle);
  if (substring != NULL) {
    printf("Found substring '%s' in string '%s'\n", needle, haystack);
  } else {
    printf("Substring '%s' not found in string '%s'\n", needle, haystack);
  }
  return 0;
}
