#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value parameter
 * @max: maximum value parameter
 * Return: newly created pointer
 */

int *array_range(int min, int max)
{
	int m, n;
	int *ptr;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);
	for (m = 0; m < n; m++)
	{
		ptr[m] = min;
		min++;
	}
	return (ptr);
}
