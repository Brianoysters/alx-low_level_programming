#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: string input
 * @c: character to initialize string
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int m;

	str = malloc(sizeof(char) * size);

	if (size <= 0 || str == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		str[m] = c;
	return (str);
}
