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



#endif
