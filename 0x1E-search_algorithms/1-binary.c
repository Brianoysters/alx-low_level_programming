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
	int prev, cur, new, index;

	if (!array)
		return (-1);

	prev = 0;
	new = (int) size - 1;

	while (prev <= new)
	{
		printf("Searching in array: ");
		for (index = first; index <= last; idex++)
		{
			printf("%d", array[index]);
			if (index == last)
				printf("\n");
			else
				printf(", ");
		}
		cur = (prev + new) / 2;
		if (array[mid] == value)
			return (cur);
		if (array[cur] > value)
			new = cur - 1;
		else
			prev = cur + 1;
	}
	return (-1);
}

