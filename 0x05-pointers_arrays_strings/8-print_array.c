#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the number of elements of an array.
 *
 * @a: Array of integers
 * @n: Number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
