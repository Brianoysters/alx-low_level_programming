#include "search_algos.h"
#include <stddef.h>

/**
 * binary_search - Searches for value in a sorted array
 * @array: Pointer to array
 * @size: First param
 * @value: second param
 *
 * Return: Location Index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index, prev_pos, cur_pos;

	if (array == NULL)
		return (-1);

	for (prev_pos = 0, cur_pos = size - 1; cur_pos >= prev_pos;)
	{
		printf("Searching in array: ");
		for (index = prev_pos; index < cur_pos; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = prev_pos + (cur_pos - prev_pos) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			cur_pos = index - 1;
		else
			prev_pos = index + 1;
	}

	return (-1);
}

