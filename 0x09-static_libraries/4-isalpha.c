#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the char to be checked
 * Return: 1 if is a letter, o otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
