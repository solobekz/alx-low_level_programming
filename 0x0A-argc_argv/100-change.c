#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins need to make change for an amount
 * @argc: arg count
 * @argv: arg array
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int i, tot = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		if (i >= 25)
			i -= 25;
		else if (i >= 10)
			i -= 10;
		else if (i >= 5)
			i -= 5;
		else if (i >= 2)
			i -= 2;
		else if (i == 1)
			i -= ;
		tot += 1;
	}
	printf("%d\n", tot);
	return (0);
}
