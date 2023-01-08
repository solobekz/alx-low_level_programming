#include "main.h"

/**
 * _strpbrk - searches string for a setbof bytes
 * @s: string
 * @accept: set of byte to search
 * Return: pointer to matched byte or null if absent
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
