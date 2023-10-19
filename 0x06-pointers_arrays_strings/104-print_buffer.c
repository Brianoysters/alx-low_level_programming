#include "main.h"
#include <stdio.h>

/**
 * print_buffer - outputs buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, m, n;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		m = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + o + n));
			else
				printf("  ");
			if (n % 2)
			{
				printf(" ");
			}
		}
		for (n = 0; n < m; n++)
		{
			int t = *(b + o + n);

			if (t < 32 || t > 132)
			{
				t = '.';
			}
			printf("%c", t);
		}
		printf("\n");
		o += 10;
	}
}
