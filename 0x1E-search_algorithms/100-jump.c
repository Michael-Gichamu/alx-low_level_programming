#include "search_algos.h"
#include <math.h>

/**
 * min - Calculates minimum number.
 * @a: First number.
 * @b: Second number.
 * Return: if b is greater a - a
 *	   Otherwise - b
 */
int min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	int prev = 0;
	int step = sqrt(size);
	int flag = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		flag = 1;
		if (prev > (int)size)
			break;
	}
	if (flag == 1)
	{
		prev = prev - sqrt(size) + 1;
		step = step - sqrt(size) + 1;
	}
	else
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev >= (int)size)
		{
			return (-1);
		}
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
	{
		return (prev);
	}

	return (-1);
}
