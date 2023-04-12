#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a matrix, make space and free space
 * @width: takes in width of matrix
 * @height: height of matrix
 * Return: matrix with freed spaces
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		matrix[i][j] = 0;
	return (matrix);
}
