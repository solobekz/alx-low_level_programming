#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers from 1, 2
 * Return: 0
 */

int main(void)
{
	int count;
	int counto = 50;
	int a = 1;
	int b = 2;

	for (count = 1; count <= (counto / 2); count++)
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;
	}
	printf("\n");

	return (0);
}
