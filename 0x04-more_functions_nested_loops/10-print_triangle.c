#include "main.h"

/**
 * print_triangle - prints a triangle with #
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int c;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			i = 1;
			while (i <= size - c)
			{
				_putchar(' ');
				i++;
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

