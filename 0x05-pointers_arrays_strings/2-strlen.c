#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: stirng to count.
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
