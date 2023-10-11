#include "main.h"

/**
 * print_alphabet_x10 - output the alphabet 10 times
 * Return: null
 */

void print_alphabet_x10(void)
{

char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}


}
