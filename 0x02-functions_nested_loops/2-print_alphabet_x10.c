#include "main.h"
/**
 * print_alphabet_x10 - Function to print the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(letter <= 'z');
		{
			_putchat(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}
