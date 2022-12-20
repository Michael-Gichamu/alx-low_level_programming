#include "main.h"

/**
 * _puts - prints string
 * @str: Parameter for string.
 *
 * Return: void
 */

void _puts(char *str)
{
	int character = 0;

	while (str[character] != '\0')
	{
		_putchar(str[character]);
		character++;
	}

	_putchar('\n');
}
