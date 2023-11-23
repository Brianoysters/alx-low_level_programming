#include "main.h"

/**
 * set_bit - sets the value of a bit to one
 * @n: pointer
 * @index: bit index
 * Return: 1  if successful or -1 if failed operation
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);
        *n = ((1UL << index) | *n);
        return (1);
}
