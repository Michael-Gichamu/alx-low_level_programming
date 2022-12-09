#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int integer;
	char character;
	long int long_integer;
	long long int long_long_integer;
	float float_data_type;

	printf("Size of a char: %i byte(s)\n", sizeof(character));
	printf("Size of an int: %i byte(s)\n", sizeof(integer));
	printf("Size of a long int: %i byte(s)\n", sizeof(long_integer));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long_long_integer));
	printf("Size of a float: %i byte(s)\n", sizeof(float_data_type));
	return (0);
}

