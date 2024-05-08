#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - Searches for a value in an array of given set of integers
 * @array: Pointer to array
 * @size: 1st param
 * @value: 2nd param
 *
 * Return: index of value local
 */

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);
	for (index = 0; index < (int) size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}

