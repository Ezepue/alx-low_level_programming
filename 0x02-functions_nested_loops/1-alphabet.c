#include <unistd.h>
/**
 * print_alphabet - Prints the lowercase alphabet
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return; Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
