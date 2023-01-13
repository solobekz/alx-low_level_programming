#include <stdio.h>

/**
 * main - prints the result of multiplying 2 int
 * @argc: argument count
 * @argv: arguments array
 * Result: 1 is error, 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
