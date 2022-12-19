#include "main.h"

/**
 * _strlen - string lenlength
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
 * puts2 - prints strings in reverse
 * @str: strings to print
 * Return void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
