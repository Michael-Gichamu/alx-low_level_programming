#include "main.h"

/**
 * factorial - gets the factorial of a number.
 * @n: the number to get its factorial.
 *
 * Return: -1 if n < 0, 1 if n == 0 else an integer.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

