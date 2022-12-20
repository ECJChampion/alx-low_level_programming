void print_rev(char *s) {
  // Find the length of the string
  int len = strlen(s);

  // Print the string in reverse
  for (int i = len - 1; i >= 0; i--) {
    putchar(s[i]);
  }

  // Print a new line
  putchar('\n');
}
