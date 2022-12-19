#include "main.h"

/**
 * puts2 - prints strings in reverse
 * @str: strings to print
 * Return void
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	len--;
	for (i = 0; i <= len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
