#include "main.h"
#include "_strlen.c"

/**
 * _strncat - append n bytes of space in an array
 * @dest: destination
 * @src: source
 * @n: bytes of space
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
