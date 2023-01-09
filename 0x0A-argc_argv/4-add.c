#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j, sum;

	while (i < argc)
	{
		++i;
	}
	if (i == 0)
	{
		printf("0\n");
	}
	for (j = 1; j < argc; ++j)
	{
		if (*argv[j] == 'e')
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[j]) >= 0 || atoi(argv[j]) <= 9)
		{
			sum = sum + atoi(argv[j]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

