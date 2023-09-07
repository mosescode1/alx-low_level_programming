#include "main.h"
#include <stdlib.h>

/**
 * free_grid - let Free a 2 dimensional array of twisted integers.
 * @grid: The dimension array
 * @height: The number of rows.
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
