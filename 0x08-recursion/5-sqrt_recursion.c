#include(main.h)
/**
 * _sqrt_recursion - Calculates the natural square root
 * of a number
 * @n: The number to calculate the square root
 * Return: the natural square root of 'n'
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		int mid = n / 2;

		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			return (_sqrt_recursion(mid + 1));
		}
		else
		{
			return (-1);
		}
	}
}
