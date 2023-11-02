#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer input
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(sizeof(b));

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
