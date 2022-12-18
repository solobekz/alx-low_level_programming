#include "main.h"

/**
 * print_square - prints a square with #
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int c;
	int i;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('\#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
