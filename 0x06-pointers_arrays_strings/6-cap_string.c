#include "main.h"

/**
 * cap_string - capitalize strings
 * @s: strings
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 127 || s[i] == '\t' || s[i] == '\n' || s[i] == 33 || s[i] == 44)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		if (s[i] == 46 || s[i] == 59 || s[i] == 34 || s[i] == 63 || s[i] == 40)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		if (s[i] == 41 || s[i] == 123 || s[i] == 125)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
