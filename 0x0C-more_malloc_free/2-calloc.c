#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and
 * assigns value (0) for each of its elements.
 * @nmemb: number of elements.
 * @size: size of the elements.
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; ++i)
		p[i] = '\0';
	return (p);
}

