#include "main.h"
/**
 * print_alphabet_x10 - function to display alphabets 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char tentimes;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (tentimes = 'a'; tentimes <= 'z'; tentimes++)
		{
			_putchar(tentimes);
		}
		_putchar('\n');
	}
}
