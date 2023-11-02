#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: initially assigned memory size
 * @new_size: newly assigned memory size
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	size_t i, extreme = new_size;
	char *initp = ptr;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size > old_size)
		extreme = old_size;

	for (i = 0; i < extreme; i++)
		new[i] = initp[i];
	free(ptr);

	return (ptr);
}
