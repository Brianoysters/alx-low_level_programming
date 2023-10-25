#include "main.h"

int mpv_prime(int n, int i);

/**
 * is_prime_number - determines if an integer is a prime number or not
 * @n: intger value
 *
 * Return: 1 if prime, 0 if No
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (mpv_prime(n, n - 1));
}

/**
 *mpv_prime - calculates if a number is prime recursively
 *@n: number to evaluate
 *@i: parameter to iterate
 *
 *Return: 1 if prime, 0 if No
 */
int mpv_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (mpv_prime(n, i - 1));
}
