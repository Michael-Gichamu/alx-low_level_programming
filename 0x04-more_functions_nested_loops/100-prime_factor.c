#include <stdio.h>
#include <math.h>

/**
  * main - Prints largest prime factor of the 612852475143
  *
  * Return: Always 0
  */
int main(void)
{
	long x, prime_number;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			prime_number= number / x;
		}
	}

	printf("%ld\n", prime_number);

	return (0);
}
