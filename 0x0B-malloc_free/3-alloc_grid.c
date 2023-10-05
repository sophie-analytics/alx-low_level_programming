#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that creates a grid
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: The result
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
{
	return (NULL);
}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
{
	return (NULL);
}
	for (i = 0; i < height; i++)
{
	grid[i] = (int *)malloc(width * sizeof(int));
	if (grid[i] == NULL)
{
	return (NULL);
}
	for (j = 0; j < width; j++)
{
	grid[i][j] = 0;
}
}
	return (grid);
}
