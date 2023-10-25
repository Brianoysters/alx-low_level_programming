#include "main.h"

/**
  *_pow_recursion - function returns x raised to power y.
  *@x:First value
  *@y:Second value
  *Return: value
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
