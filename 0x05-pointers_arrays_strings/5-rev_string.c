#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int j;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	j = len - 1;
	i = 0;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
