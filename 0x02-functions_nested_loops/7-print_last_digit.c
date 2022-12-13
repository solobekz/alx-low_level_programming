#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: digit whos last digit is printed
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int r;
	
	if (n < 0)
	n *= -1;
	
	r = n % 10;
	_putchar(r);

	return (r);
}
