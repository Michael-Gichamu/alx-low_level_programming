#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory and returns a pointer.
 * @b: size to be allocated.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}

