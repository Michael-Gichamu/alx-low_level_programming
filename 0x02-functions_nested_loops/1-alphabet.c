#include "main.h"

/**
 *main - Entry point
 *
 * program displays lowercase of all the alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
