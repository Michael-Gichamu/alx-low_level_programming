#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of all arguments passed to it.
 * @n: Number of parameters.
 * @...: Values to be calculated.
 *
 * Return: 0 if n == 0. Otherwise return Sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}

