#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int term_count = 98;
	unsigned long int current_term = 1, next_term = 2, sum_of_terms;

	printf("%lu, %lu", current_term, next_term);

	for (int i = 2; i < term_count; i++)
	{
		sum_of_terms = current_term + next_ter
			printf(", %lu", sum_of_terms);
		current_term = next_terms;
		next_term = sum_of_terms;
	}

	printf("\n");
	return (0);
}
