#include "main.h"

/**
 * puts2 - prints every character of a string,start with the first character.
 *
 * @str: parameter of the function
 * Return: void
 */
void puts2(char *str)
{
	int ch;
	char c;

	for (ch = 0; str[ch] != 0; ch++)
	{
		if (ch % 2 == 0)
		{
			c = str[ch];
			_putchar(c);
		}
	}
	_putchar('\n');
}
