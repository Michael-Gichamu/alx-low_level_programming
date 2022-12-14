#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: stores a string.
 * @src: source string.
 * @n: amount of bytes to be copied from src.
 *
 * Return: A pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
