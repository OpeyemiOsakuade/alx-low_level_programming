#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: Pointer to the 2D grid
 * @height: Height of the grid (number of rows)
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Free each row in reverse order */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the array of row pointers */
	free(grid);
}
