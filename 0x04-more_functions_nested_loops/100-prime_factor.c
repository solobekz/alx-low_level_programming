#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	unsigned long n;
	unsigned long d;

	n = 612852475143;
	d = 2;
	while (d < n)
	{
		if (n % d == 0)
		{
			n /= d;
			d = 2;
		}
		else
		{
			d++;
		}
	}
	printf("%lu\n", n);

	return (0);
}
