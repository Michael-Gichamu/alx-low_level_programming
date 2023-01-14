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
	int i = 0, totalsize;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalsize = nmemb * size;
	p = malloc(totalsize);

	if (p == NULL)
		return (NULL);

	while (i < totalsize)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}


