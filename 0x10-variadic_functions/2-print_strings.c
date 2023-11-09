#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - outputs strings followed by a new line.
 * @separator: string output.
 * @n: number of strings passed to the function.
 * @...: variable number of strings to be inputed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strn;
	char *str;
	unsigned int i;

	va_start(strn, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strn, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strn);
}
