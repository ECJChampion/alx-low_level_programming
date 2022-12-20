#include <stdio.h>

int main(void) {
  char s[] = "hello";
  int len = _strlen(s);
  printf("The length of the string '%s' is %d.\n", s, len);
  return 0;
}
