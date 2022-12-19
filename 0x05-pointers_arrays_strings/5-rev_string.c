#include "main.h"

/**
 * _strlen - checks length of string
 * @s: strings to check
 * Return: result
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

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

	j = _strlen(s) - 1;
	for (i = 0; i < j; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}
}
