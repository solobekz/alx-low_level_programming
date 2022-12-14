#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the number whos times table is printed
 * Return: Always 0
 */

void print_times_table(int n)
{
	int row;
	int col;
	int pro;
	
	if (!(n < 0 || n > 15))
	{
		for (row = 0; row <= 'n'; row++)
		{
			for (col = 0; col <= 'n'; col++)
			{
				pro = row * col;
				if (col == 0)
					_putchar('0' + pro);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (pro <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + pro);
					}
					else if (pro > 9 && pro < 100)
					{
						_putchar(' ');
						_putchar('0' + (pro / 10));
						_putchar('0' + (pro % 10));
					}
					else if (pro >= 100)
					{
						_putchar((pro / 100) + '0');
						_putchar(((pro / 10) % 10) + '0');
						_putchar((pro % 10) + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
}
