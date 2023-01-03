#include <stddef.h>

char *my_strpbrk(const char *s, const char *accept) {
  for (; *s; ++s) {
    for (const char *p = accept; *p; ++p) {
      if (*s == *p) {
        return (char *) s;
      }
    }
  }
  return NULL;
}
