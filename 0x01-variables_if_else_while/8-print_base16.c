#include <stdio.h>

/**
 * main - print 0123456789101112131415
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = '0';
	char alpha = 'a';

	while (n <= '9');
	{
		putchar(n);
		n++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
