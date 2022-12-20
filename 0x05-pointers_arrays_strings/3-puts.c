#include <stdio.h>

void _puts(char *str) {
  printf("%s\n", str);
}

int main() {
  char *str = "Hello, World!";
  _puts(str);
  return 0;
}
