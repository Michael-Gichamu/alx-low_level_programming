#include "function_pointers.h"

/**
 * array_iterator - executes a function on each
 *                  element of an array.
 * @array: given array.
 * @size: size of array.
 * @action: Pointer function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}

