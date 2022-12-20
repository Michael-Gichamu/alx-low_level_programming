#include "main.h"
/**
 * print_rev - reverses a string
 * @s: The parameter to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int character = 0;

	while (s[character] != '\0')
	{
		character++;
	}

	for (character -= 1; character >= 0; character--)
	{
		_putchar(s[character]);
	}

	_putchar('\n');
}
