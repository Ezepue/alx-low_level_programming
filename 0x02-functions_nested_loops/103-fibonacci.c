#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int term_count;
	unsigned long int first_term, second_term, next_term, even_sum;

	first_term = 1;
	second_term = 2;
	even_sum = 0;

	term_count = 1;
	while (term_count <= 33)  /* Up to 33 terms to not exceed 4,000,000 */
	{
		if (first_term < 4000000 && first_term % 2 == 0)
		{
			even_sum = even_sum + first_term;
		}
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;

		term_count++;
	}

	printf("%lu\n", even_sum);

	return (0);
}
