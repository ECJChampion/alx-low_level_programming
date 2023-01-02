#include <stdio.h>
#include <string.h>

int main(void) {
  char src[50] = "Hello World!";
  char dest[50];

  _memcpy(dest, src, strlen(src) + 1);
  printf("Copied string: %s\n", dest);

  return 0;
}
