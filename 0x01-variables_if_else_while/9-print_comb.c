#include <stdio.h>
/**
 * main - Entry
 *
 * Display numbers from 0-9 with commas and space between them
 *
 * Return: 0
 */
int main(void)
{
	int clean_output;

	for (clean_output = 48; clean_output <= 57; clean_output++)
	{
		putchar(clean_output);
		if (clean_output != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
