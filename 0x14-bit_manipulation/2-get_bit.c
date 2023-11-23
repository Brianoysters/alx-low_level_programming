#include "main.h"

/**
 * get_bit - returns value of a bit at an index
 * @n: operator
 * @index: bit indices
 * Return: a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_index;

	if (index > 63)
		return (-1);
	bit_index = (n >> index) & 1;
	return (bit_index);
}
