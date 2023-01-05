#include "main.h"

/**
 * _pow_recursion - finds the power of a number raised to a another number.
 * @x: Number to be raised.
 * @y: the power number.
 *
 * Return: -1 if y < 0, else an integer value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, (y - 1))));
}

