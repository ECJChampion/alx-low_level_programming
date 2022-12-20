#include <stdio.h>

int main(void) {
  char s[] = "Hello, world!";
  rev_string(s);
  printf("%s\n", s);  // Output: "!dlrow ,olleH"
  return 0;
}
