#include "main.h"

/**
  * print_triangle - Displays triangles
  * @size: Parameter for the size of the squares of triangle
  *
  */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(' ');
			}

			for (z = 0; z <= x; z++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

