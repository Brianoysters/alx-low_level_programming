#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: count arguments
 * @argv: arguments vector
 * Return: 0 (Success) and 1 if (Error)
 */

int main(int argc, char *argv[])
{
	int num, a, total;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	total = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			total++;
			num -= coins[a];
		}
	}
	printf("%d\n", total);
	return (0);
}
