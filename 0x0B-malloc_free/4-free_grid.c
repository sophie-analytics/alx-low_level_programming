#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A functon that free a memory
 * @grid: The grid to free
 * @height: The height of the grid
 * Return: The result
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
{
	return;
}
	for (i = 0; i < height; i++)
{
	free(grid[i]);
}
	free(grid);
}
