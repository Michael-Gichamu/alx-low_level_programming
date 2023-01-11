#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters.
 * @size: The size of the array.
 * @c: The char to fill in the array.
 *
 * Return: The array to be filled.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}

