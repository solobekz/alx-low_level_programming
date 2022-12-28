#include "main.h"
#include "_strlen"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: less than 0, 0 or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = _strlen(s1);
	int j = _strlen(s2);
	int k = 0;

	while (k < j)
	{
		if (s1[k] > s2[k])
		{
			return (15);
		}
		else if (s1[k] < s2[k] || s1[k] == '\0')
		{
			return (-15);
		}
		else
		{
			k++;
		}
	}
	if (k == j)
		return (0);
}
