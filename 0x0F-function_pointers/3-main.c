#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - outputs results
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int dig1, dig2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	dig1 = atoi(argv[1]);
	op = argv[2];
	dig2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && dig2 == 0) ||
	    (*op == '%' && dig2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(dig1, dig2));

	return (0);
}
