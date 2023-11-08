#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc_custom: number of arguments count
 * @argv_custom: argument vector
 * Return: 0
 */
int main(int argc_custom, char *argv_custom[])
{
	int num_bytes, i;
	char *arr;

	if (argc_custom != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv_custom[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
