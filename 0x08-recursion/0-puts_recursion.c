#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Stores the string passed from the main function.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
