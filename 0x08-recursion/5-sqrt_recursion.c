#include "main.h"

int mpv_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function outputs square root of a number
 * @n: input value
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else
		return (mpv_sqrt_recursion(n, 0));
}

/**
 *mpv_sqrt_recursion - recurses to find the most probable value for the
 *square root of a number
 *@n: input operator
 *@i: enables iteration
 *
 * Return: square root
 */
int mpv_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (mpv_sqrt_recursion(n, i + 1));
}
