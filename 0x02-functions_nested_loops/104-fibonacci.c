#include <stdio.h>

/**
 * main - Entry point to print the Fibonacci sequence
 *
 * Purpose: Generate and print Fibonacci sequence with dynamic precision
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int count;
	unsigned long int previous = 1;
	unsigned long int current = 2;
	unsigned long int billion = 1000000000;
	unsigned long int prev1;
	unsigned long int prev2;
	unsigned long int curr1;
	unsigned long int curr2;

	printf("%lu", previous);

	for (count = 1; count < 91; count++)
	{
		printf(", %lu", current);
		current += previous;
		previous = current - previous;
	}

	prev1 = (previous / billion);
	prev2 = (previous % billion);
	curr1 = (current / billion);
	curr2 = (current % billion);

	for (count = 92; count < 99; ++count)
	{
		printf(", %lu", curr1 + (curr2 / billion));
		printf("%lu", curr2 % billion);
		curr1 = curr1 + prev1;
		prev1 = curr1 - prev1;
		curr2 = curr2 + prev2;
		prev2 = curr2 - prev2;
	}

	printf("\n");
	return (0);
}

