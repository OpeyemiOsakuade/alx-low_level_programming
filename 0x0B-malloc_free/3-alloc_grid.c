#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 *
 * Return: Pointer to the newly created 2D array or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check for invalid width or height */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for rows */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for each row's columns and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		/* if allocation fails, free already allocated rows and return NULL */
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				free(grid[--i]);
			}
			free(grid);
			return (NULL);
		}

	/* Initialize elements to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
