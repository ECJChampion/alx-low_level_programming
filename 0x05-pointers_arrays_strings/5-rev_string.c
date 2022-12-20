void rev_string(char *s) {
  // Find the length of the string
  int len = 0;
  while (s[len] != '\0') {
    len++;
  }

  // Swap the characters at the beginning and end of the string,
  // moving towards the middle of the string
  for (int i = 0; i < len / 2; i++) {
    char temp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = temp;
  }
}
