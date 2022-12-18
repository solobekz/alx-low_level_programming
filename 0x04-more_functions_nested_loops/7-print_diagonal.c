#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print
 * Return: void
 */

void print_diagonal(int n)
{
	int c;
	int i;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			i = 0;
			while (i < c - 1)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
