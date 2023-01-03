#include "main.h"
/**
 * _memset - fills the n bytes of the memory area pointed
 * to by @s with the constant byte @b.
 * @s: starting address of memory to be filled.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled starting from ptr.
 * Return: Number of bytes to be filled by @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	putchar('\n');
	return (s);
}
