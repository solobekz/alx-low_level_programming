#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes char on standard output
 * @c: char to be writen
 * Return: char ASCII value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
