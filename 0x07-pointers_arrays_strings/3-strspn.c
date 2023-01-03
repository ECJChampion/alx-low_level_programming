unsigned int _strspn(char *s, char *accept) {
  unsigned int length = 0;
  while (*s != '\0') {
    if (strchr(accept, *s) != NULL) {
      length++;
    } else {
      break;
    }
    s++;
  }
  return length;
}
