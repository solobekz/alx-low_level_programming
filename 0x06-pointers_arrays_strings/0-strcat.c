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
	int p;
	int j = 0;
	int q;
	int n;

	p = _strlen(dest);
	j = _strlen(src) + 1;
	n = p + j;
	
	for (i = j; i <= n && *src != '\0'; i++,)
	{	
		dest[i] = src[q];
		q++;

	}
	return (dest);
}
