#include "main.h"
#include "2-strlen_recursion.c"

/**
 * check_palindrome - checks if string is a palidrome
 * @s: string
 * @b: identifier of 1st char
 * @e: identifier of last char
 * Return: 1 or 0
 */

int check_palindrome(char *s, int b, int e)
{
	if (s[b] == s[e])
	{
		if (b == e || b == e - 1)
			return (1);
		return (0 + check_palindrome(s, b + 1, e - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
