#include <stdio.h>

/**
 * main - prints 1-100 with muliples of 3 as fizz and 5 as buzz
 * Return: 0
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");

		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
		n++;
	}
	printf("\n");
	return (0);
}
