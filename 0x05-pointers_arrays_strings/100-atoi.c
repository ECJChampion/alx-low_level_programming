#include <stdio.h>

int _atoi(char *s)
{
    int sign = 1;
    int num = 0;
    char c;

    // skip leading whitespace
    while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r')
        s++;

    // check for sign character
    if (*s == '+')
        s++;
    else if (*s == '-')
    {
        sign = -1;
        s++;
    }

    // convert digits to number
    while (*s >= '0' && *s <= '9')
    {
        c = *s - '0';
        num = num * 10 + c;
        s++;
    }

    return sign * num;
}

int main()
{
    char s[] = "123";
    printf("%d\n", _atoi(s)); // 123

    char t[] = "-456";
    printf("%d\n", _atoi(t)); // -456

    char u[] = "   789";
    printf("%d\n", _atoi(u)); // 789

    char v[] = "abc123";
    printf("%d\n", _atoi(v)); // 0

    return 0;
}
