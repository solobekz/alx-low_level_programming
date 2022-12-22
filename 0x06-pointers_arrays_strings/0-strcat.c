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
	int i = 0;
	int j = _strlen(src);
	
	while (src[i] != '\0')
	{	
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
