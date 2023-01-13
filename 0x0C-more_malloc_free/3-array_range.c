#include <stdlib.h>
#include "main.h"

/**
 * array_range - contains all values from min to max,
 * ordered from min to max.
 * @min: lowest value passed.
 * @max: Highest value passed.
 *
 * Return: Pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, sizeofarray;

	if (min > max)
		return (NULL);
	sizeofarray = ((max - min) + 1);

	p = malloc((sizeof(int) * sizeofarray));

	if (p == NULL)
		return (NULL);

	for (i = min; i < sizeofarray; i++)
		p[i] = min++;

	return (p);
}

