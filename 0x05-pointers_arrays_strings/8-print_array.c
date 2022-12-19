#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements in array
 * @a: the array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%i", a[i]);
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
