#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - outputs number of flips
 * @n: int operand
 * @m: int operand
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, custom_count = 0;
	unsigned long int active;
	unsigned long int unique = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		active = unique >> p;
		if (active & 1)
			custom_count++;
	}
	return (custom_count);
}
