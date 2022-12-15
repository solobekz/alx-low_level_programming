#include <stdio.h>

/**
 * main - print the sum of fibonacci numbers less than 4million start from 1,2.
 * Return: 0
 */

int main(void)
{
	long int sum = 0;
	long int a = 1;
	long int b = 2;

	while ((a <= 4000000) || (b <= 4000000))
	{
		a += b;
		b += a;
		if (a % 2 == 0)
			sum += a;
		if (b % 2 == 0)
			sum += b;
	}
	printf("%li\n", sum);

	return (0);
}
