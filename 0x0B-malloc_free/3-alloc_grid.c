#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: rows
 * @height: collumns
 *
 * Return: pointer to pointer to array, or NULL.
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int *));
		if (matrix == NULL)
		{
			for (i--; i <= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;

	return (matrix);
}
