#ifndef MAIN_H
#define MAIN_H

/**
 * _memset - fills memory with a constant
 * @s: array
 * @b: constant value
 * @n: number of bytes to fill
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy memory fromsrc to dest
 * @dest: destination
 * @src: source
 * @n: no of bytes to copy over
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates character froma string
 * @s: string to locate from
 * @c: char to locate
 * Return: pointer to first occurence or null if absent
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: substring
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches string for a set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to the bytes or null if absent
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: string searched
 * @needle: string to locate
 * Return: pointer to 1st occurence or null
 */

char *_strstr(char *haystack, char *needle);

/**
 * _putchar - prints character
 * @c: char to put to standard output
 * Return: 0
 */

int _putchar(char c);

/**
 * print_chessboard - prints chessboard
 * @a: 2nd array
 * Return: void
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints diagonals sum
 * @a: array of matrice
 * @size: size of matrice
 * Return: void
 */

void print_diagsums(int *a, int size);

/**
 * set_string - set value of point to char
 * @s: string
 * @to: char to set
 * Return: void
 */

void set_string(char **s, char *to);



#endif
