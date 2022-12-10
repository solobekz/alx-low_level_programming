#include <stdio.h>

/**
 * main - print two 2 digit num
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int unit;
	int t;
	int u;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				for (u = unit + 1; u <= '9'; u++)
				{
					putchar(tens);
					putchar(unit);
					putchar(' ');
					putchar(t);
					putchar(u);
					if (!(tens == '9' && unit == '8' && t == '9' && u == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				u = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
