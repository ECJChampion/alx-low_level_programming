char *rot13(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'm')
        {
            str[i] += 13;
        }
        else if (str[i] >= 'A' && str[i] <= 'M')
        {
            str[i] += 13;
        }
        else if (str[i] >= 'n' && str[i] <= 'z')
        {
            str[i] -= 13;
        }
        else if (str[i] >= 'N' && str[i] <= 'Z')
        {
            str[i] -= 13;
        }
    }
    return str;
}
