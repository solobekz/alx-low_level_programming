#include "main.h"

/**
 * print_numbers - prints 0-9 and newline
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
