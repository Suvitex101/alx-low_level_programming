#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to an array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: return array of integers
 */
int **alloc_grid(int width, int height)
{

	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));


	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)

		{
			for (j = 0; j < i; j++)
				free(grid[i]);
			free(grid);
			return (NULL);

		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	}
	return (grid);
}
