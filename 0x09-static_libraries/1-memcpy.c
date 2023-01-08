#include "main.h"

/**
 * _memcpy - copy memory from src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes to copy
 * Return: array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
