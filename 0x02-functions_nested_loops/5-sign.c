#include "main.h"
/**
 * print_sign -Displays sign of a number +,0,-
 *
 * @n: This is a paramter of print_sign function
 *
 *Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
