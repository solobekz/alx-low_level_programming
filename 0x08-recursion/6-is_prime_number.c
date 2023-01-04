#include "main.h"

/**
 * is_prime - checks if an int is prime
 * @n: integer
 * @c: iterator
 * Return: 0 or 1
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - checks if an int is prime
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
