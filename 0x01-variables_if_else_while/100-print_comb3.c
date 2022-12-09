#include <stdio.h>

/**
 * main - print 00 - 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int unit;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			if (!(tens >= unit))
			{
				putchar(tens);
				putchar(unit);
				if (!(tens == '9' && unit == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
