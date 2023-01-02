#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to begining of the location or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (h);
		h++;
	}
	return ('\0');
}
