#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: strings to print
 * Return void
 */

void print_rev(char *s)
{
	for (*s = '\0'; s <= 0; --s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
