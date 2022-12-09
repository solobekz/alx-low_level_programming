#include <stdio.h>

/**
 * main - print 0123456789101112131415
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = '0';

	while (n < '16');
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
