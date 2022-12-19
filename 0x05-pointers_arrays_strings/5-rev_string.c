#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = 0; i < len; i++)
	{
		s[i] = *s;
		s--;
	}
}
