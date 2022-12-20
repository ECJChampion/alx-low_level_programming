#include <stdio.h>

int main(void) {
  char str[] = "Hello, world!";
  int len = _strlen(str);
  printf("The length of the string is %d.\n", len);
  return 0;
}
