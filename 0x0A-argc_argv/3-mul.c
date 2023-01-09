#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the result of the multiplication.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always(0) Success.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int result;

	while (i < argc)
	{
		++i;
	}
	if (i != 3)
	{
		printf("Error\n");
	}
	else
	{
		result = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", result);
	}
	return (0);
}

