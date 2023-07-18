#include "main.h"

void print_alphabet_x10(void)
{
    char letter;
    int repeat = 10;

    while (repeat > 0)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
        repeat--;
    }

    _putchar('\n');
}

