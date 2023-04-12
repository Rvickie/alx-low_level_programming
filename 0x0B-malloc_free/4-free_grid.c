#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function that frees 2d array
 * @grid: input
 * @height: input
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
