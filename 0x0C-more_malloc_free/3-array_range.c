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
	int i;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

