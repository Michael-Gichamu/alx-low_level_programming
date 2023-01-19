#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: given array
 * @size: size of the given array
 * @cmp: Pointer to the function used to compare values
 * Return: Index of 1st element to which cmp does not
 * return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			++i;
		}
	}

	return (-1);
}



