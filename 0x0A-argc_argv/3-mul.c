#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplying 2 int
 * @argc: argument count
 * @argv: arguments array
 * Return: 1 is error, 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
