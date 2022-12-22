#include "main.h"
#include "_strlen.c"

/**
 * _strcat - appends 2 strings
 * @dest: destination
 * @src: source
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
