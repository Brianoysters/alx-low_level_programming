#include <stdlib.h>
#include "main.h"

/**
 * print_binary - outputs binary representation of a number
 * @n: output value
 */

void print_binary(unsigned long int n)
{
	int custom_1, custom_2 = 0;
	unsigned long int active;

	for (custom_1 = 63; custom_1 >= 0; custom_1--)
	{
		active = n >> custom_1;
		if (active & 1)
		{
			_putchar('1');
			custom_2++;
		}
		else if (active)
			_putchar('0');
	}
	if (!active)
		_putchar('0');
}
