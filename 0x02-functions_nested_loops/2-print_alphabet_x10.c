#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 *                      followed by a new line each time
 */
void print_alphabet_x10(void)
{
    char letter;
    int repetition;

    repetition = 0;

    while (repetition < 10)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
        repetition++;
    }
}
