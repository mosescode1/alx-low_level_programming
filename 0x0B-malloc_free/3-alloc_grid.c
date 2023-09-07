#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - lets try to generate a 2 spatial array of twisted integers.
 * @width: The number of columns to input.
 * @height: The number of rows to input.
 * Return: returns a pointer to a 2 spatial array of twisted integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
