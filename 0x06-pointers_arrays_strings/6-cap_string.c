char *cap_string(char *s)
{
  int i;
  char *separators = " \t\n,;.!?\"(){}";

  for (i = 0; s[i] != '\0'; i++)
  {
    if (i == 0 || strchr(separators, s[i - 1]) != NULL)
    {
      s[i] = toupper(s[i]);
    }
  }

  return s;
}
