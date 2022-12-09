#include <stdio.h>

/**
 * main - print 3digit mumber
 * Return: Always 0 (Success)
 */

int main(void)
{
	int thou;
	int tens;
	int unit;

	for (thou = '0'; thou <= '7'; thou++)
	{
		for (tens = '1'; tens <= '8'; tens++)
		{
			for (unit = '2'; unit <= '9'; unit++)
			{
				if (!(unit >> thou && unit >> tens))
				{
					putchar(thou);
					putchar(tens);
					putchar(unit);
					if (!((thou == '7' && tens == '8') && unit == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
