#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - function which clears bits
 * @n: pointer
 * @index: index opeartor
 * Return: 1 if successful  or -1 for failed opeartion
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
