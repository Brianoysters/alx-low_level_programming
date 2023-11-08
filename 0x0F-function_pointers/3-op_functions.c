#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - outputs summation
 * @a: first parameter
 * @b: second parameter
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - outputs difference of two numbers.
 * @a: The first parameter
 * @b: The second parameter
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - outputs the product
 * @a: first parameter
 * @b: second parameter
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - outputs the division
 * @a: first parameter
 * @b: second parameter
 * Return: quotient of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - outputs the remainder of division
 * @a: first parameter
 * @b: second parameter
 * Return: remainder of the division of two numbers inputed
 */
int op_mod(int a, int b)
{
	return (a % b);
}
