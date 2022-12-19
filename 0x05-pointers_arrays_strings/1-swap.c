#include "main.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: first int
 * @b: second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aa = *a;
	int bb = *b;

	*a = bb;
	*b = aa;
}
