#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *Getting the last digit of a variable and using it to an if else statement
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_num = n % 10;
	if (last_num > 5)
	{
		printf("Last digit 0f %d is %d and is greater than 5\n", n);
	}
	else if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}

