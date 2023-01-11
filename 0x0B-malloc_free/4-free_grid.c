#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2D grid created by alloc_grid function.
  * @grid: array of alloc_grid
  * @height: height of array
  *
  * Return: Nothing.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

