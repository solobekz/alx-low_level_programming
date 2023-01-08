#include "main.h"

/**
 * _puts - prints string
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	char i;

	while (*str != '\0')
	{
		i = *str;
		_putchar(i);
		str++;
	}
	_putchar('\n');
}
