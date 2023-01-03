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
	int i, s1, s2;

	s1 = 0;
	s1 = 0;
	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			s1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < (size * size - 1))
			s2 += a[i];
	}
	printf("%d, %d\n", s1, s2);
}
