#include "main.h"

/**
 * _memset - fills memory with constant byte b
 * @s: array
 * @b: constant value
 * @n: number of bytes to fill
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
