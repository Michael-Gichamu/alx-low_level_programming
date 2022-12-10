#include <stdio.h>

/**
 * main - Entry
 *
 * Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}

