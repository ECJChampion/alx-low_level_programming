#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
  char *dest_end = dest + strlen(dest);

  int i;
  for (i = 0; i < n && src[i] != '\0'; i++)
  {
    dest_end[i] = src[i];
  }

  dest_end[i] = '\0';

  return dest;
}
