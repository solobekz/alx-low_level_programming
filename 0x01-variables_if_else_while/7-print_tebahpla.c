#include <stdio.h>

/**
 * main - print lowercase z-a
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
