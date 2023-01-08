#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: less than 0, 0 or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int j;
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			j = s1[k] - s2[k];
			break;
		}
		else
		{
			j = s1[k] - s2[k];
		}
		k++;
	}
	return (j);
}
