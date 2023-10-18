#include "main.h"
/**
 * reverse_array - function reverses array of integers
 * @a: array
 * @n: elements of array num
 * Return: void(success)
 */
void reverse_array(int *a, int n)
{
	int m;
	int j;

	for (m = 0; m < n--; m++)
	{
		j = a[m];
		a[m] = a[n];
		a[n] = j;
	}
}
