#include "main.h"
#include "2-strlen.c"

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

	if (n > 0)
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i + j] = src[i];
		}
		dest[i + j] = '\0';
	}
	return (dest);
}
