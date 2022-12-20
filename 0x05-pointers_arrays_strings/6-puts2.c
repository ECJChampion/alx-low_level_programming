#include <stdio.h>
#include <string.h>

int main(void) {
  char str[] = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < strlen(str); i += 2) {
    printf("%c\n", str[i]);
  }

  return 0;
}
