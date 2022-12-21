#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: amount of bytes used from src.
 *
 * Return: A pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len2 = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (len2 < n)
	{
		*(dest + len) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len++;
		len2++;
	}
	return (dest);
}
