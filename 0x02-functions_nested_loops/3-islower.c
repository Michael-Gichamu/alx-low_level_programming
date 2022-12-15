#include "main.h"

/**
 * _islower - returns 1 if lowercase and o if uppercase
 *
 * @c: The character is used as a parameter in the function
 *
 * Return: 1 for lowercase character. 0 for uppercase
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

