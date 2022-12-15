#include <stdio.h>

/**
 * main - Displays the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float tot_sum;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot_sum += sum;

		a = b;
		a = b;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
