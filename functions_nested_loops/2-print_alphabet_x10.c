#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
    char c;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (c <= 'z')
        {
            _putchar(c);
            letter++;
        }
        _putchar('\n');
    }
}

