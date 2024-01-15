#include "main.h"

/**
 * _puts - outputs string followed by new line
 * @str: string value to be outputted
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
