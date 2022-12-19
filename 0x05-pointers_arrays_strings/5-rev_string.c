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
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	len--;
	i = 0;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
		i++;
	}
}
