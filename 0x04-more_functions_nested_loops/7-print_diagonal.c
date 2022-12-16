#include "main.h"

/**
  * print_diagonal - Draws a diagonal lines on the terminal
  * @n: Parameter for the number of times to print diagonal lines
  *
  */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
