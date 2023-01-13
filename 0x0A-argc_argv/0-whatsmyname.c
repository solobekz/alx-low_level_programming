#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: array containing the program line arguments.
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
