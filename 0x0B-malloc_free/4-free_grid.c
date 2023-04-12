#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a two dimensional array
 * @grid: two dimensional grid
 * @height: a height dimension of grid
 * Description: frees the memory of grid
 * Return: Nothing.
 *
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
