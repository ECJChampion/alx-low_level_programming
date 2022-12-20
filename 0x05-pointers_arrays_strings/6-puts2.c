#include <stdio.h>

void print_every_other_char(const char* str) {
  for (int i = 0; str[i] != '\0'; i += 2) {
    printf("%c\n", str[i]);
  }
}

int main(int argc, char* argv[]) {
  print_every_other_char("abcdefg");
  return 0;
}
