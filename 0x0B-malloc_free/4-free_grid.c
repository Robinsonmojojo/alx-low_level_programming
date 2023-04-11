#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - you can
 * @grid: you can
 * @hight: you can
 * Return 0
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
