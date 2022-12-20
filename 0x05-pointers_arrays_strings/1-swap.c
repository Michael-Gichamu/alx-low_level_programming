#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: first integer to swap
 * @b: Second integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
