#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c: character to be checked
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
