#include "main.h"

/**
 * power_op - finds square root of an integer
 * @n: integer
 * @c: probable root
 * Return: result
 */

int power_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_op(n, c + 1));
}

/**
 * _sqrt_recursion - finds square root of an int
 * @n: int
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (power_op(n, 2));
}
