#include <stdio.h>

int main(void) {
  int c = 'A';
  if (_isupper(c)) {
    printf("%c is an uppercase letter\n", c);
  } else {
    printf("%c is not an uppercase letter\n", c);
  }
  return 0;
}
