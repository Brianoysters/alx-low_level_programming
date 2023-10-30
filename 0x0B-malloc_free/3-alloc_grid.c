#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width parameter
 * @height: height parameter
 * Return: pointer to pointer of int
 */

int **alloc_grid(int width, int height)

{
	int **matrix;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		matrix[row] = malloc(sizeof(int) * width);
		if (matrix[row] == NULL)
		{
			for (; row >= 0; row--)
				free(matrix[row]);
			free(matrix);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			matrix[row][col] = 0;
	}
	return (matrix);
}
