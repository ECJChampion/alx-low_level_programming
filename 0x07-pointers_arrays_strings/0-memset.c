#include <stdio.h>
#include <string.h>

int main() {
  char str[50];
  _memset(str, 'A', sizeof(str));
  printf("%s\n", str);
  return 0;
}
