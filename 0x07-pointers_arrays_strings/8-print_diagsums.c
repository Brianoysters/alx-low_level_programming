#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: first input parameter
 * @size: second input parameter
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int m, n, y;

	m = 0;
	n = 0;

	for (y = 0; y < size; y++)
	{
		m = m + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		n += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", m, n);
}
