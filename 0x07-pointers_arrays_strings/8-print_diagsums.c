#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of the diagonal of a matrice
 * @a: array of matrice
 * @size: size of the Matrice
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, i, s1, s2;

	s1 = 0;
	s1 = 0;
	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		s1 += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		s2 += a[i];
	}
	printf("%d, %d\n", s1, s2);
}
