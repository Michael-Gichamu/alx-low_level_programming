#include "main.h"

/**
 * _islower - returns 1 if alphabetic character and o if otherwise
 *
 * @c: The character is used as a parameter in the function
 *
 * Return: 1 for alphabetic character. 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

