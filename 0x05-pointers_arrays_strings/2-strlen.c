#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to count
 * Return: string count
 */

int _strlen(int *s)
{
	int c = 0;

	while (*s[c] != '\0')
		c++;

	return (c);
}
