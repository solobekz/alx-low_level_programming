#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers from 1, 2
 * Return: 0
 */

int main(void)
{
	int count;
	int counto = 50;
	long int a = 1;
	long int b = 2;

	for (count = 1; count <= (counto / 2); count++)
	{
		if (count == 25)
		{
			printf("%li, %li", a, b);
		}
		else
		{
			printf("%li, %li, ", a, b);
			a += b;
			b += a;
		}
	}
	printf("\n");

	return (0);
}
