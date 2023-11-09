#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - outputs numbers, followed by a new line.
 * @separator: string output.
 * @n: number of integer inputs
 * @...: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list cust;
	unsigned int i;

	va_start(cust, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(cust, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(cust);
}
