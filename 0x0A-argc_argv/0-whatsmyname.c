#include <stdio.h>
#include "main.h"

/**
 * main - prints name of its program.
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: Always(0) Success.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

