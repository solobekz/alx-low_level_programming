#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, e;
	int i = 0;

	e = n - 1;
	while (i < e)
	{
		tmp = a[i];
		a[i] = a[e];
		a[e] = tmp;
		i++, e--;
	}
}
