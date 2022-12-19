#include "main.h"

/**
 * _strlen - string length
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
 * puts_half - print 2nd half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j = _strlen(str);

	j -= 1;
	if (j % 2 == 0)
	{
		for (i = (j / 2); i <= j; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((j - 1)/2); i <= j; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
