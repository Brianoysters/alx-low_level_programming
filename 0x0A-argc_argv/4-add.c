#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * verify_num - checks for digits
  * @str: string input
  * Return: 0 (Success)
  */
int verify_num(char *str)
{
	unsigned int tabulate;

	tabulate = 0;
	while (tabulate < strlen(str))
	{
		if (!isdigit(str[tabulate]))
		{
			return (0);
		}
		tabulate++;
	}
	return (1);
}


/**
  * main - outputs name of the function
  * @argc: Count arguments
  * @argv: Arguments vector
  * Return: 0 (Success)
  */

int main(int argc, char *argv[])
{
	int tabulate;
	int str_to_int;
	int add = 0;

	tabulate = 1;
	while (tabulate < argc)
	{
		if (verify_num(argv[tabulate]))
		{
			str_to_int = atoi(argv[tabulate]);
			add += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		tabulate++;
	}
	printf("%d\n", add);
	return (0);
}
