#include "main.h"

/**
 * _strlen -vstr length
 * @str: string
 * Return: result
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcpy - copies string from one array into another
 * @dest: buffer copied into
 * @src: copy source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
