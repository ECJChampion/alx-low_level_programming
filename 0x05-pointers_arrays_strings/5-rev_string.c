#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "hello";
    rev_string(s);
    printf("%s\n", s);  // outputs "olleh"

    return 0;
}
