#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a:first value
 * @b:second value
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
