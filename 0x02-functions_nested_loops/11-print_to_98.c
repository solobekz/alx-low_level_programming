#include "main. h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the number to start from
 * Return: Always 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ",  n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printfprintf("\n");
}
