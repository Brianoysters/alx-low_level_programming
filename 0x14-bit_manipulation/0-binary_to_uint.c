#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -outputs converted binary to unsint
 * @b: string inpu
 * Return: converted digit
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int dig = 0;

	if (b == NULL)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		dig = 2 * dig + (b[m] - '0');
	}
	return (dig);
}
