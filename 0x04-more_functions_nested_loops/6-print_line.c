#include "main.h"

/**
 * print_line - prints line
 * @n: char to be printed
 * Return: void
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
