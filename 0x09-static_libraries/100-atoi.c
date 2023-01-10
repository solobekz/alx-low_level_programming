#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string
 * Return: converted int
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int si = 1;

	do {
		if (*s == '-')
			si *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * si);
}
