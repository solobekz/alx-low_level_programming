#ifndef MAIN_H
#define MAIN_H

/**
 * _strcat - appends arrays
 * @dest: destination
 * @src: source
 * Return: dest string
 */

char *_strcat(char *dest, char *src);

/**
 * _strlen - string length
 * @s: string to count
 * Return: length
 */

int _strlen(char *s);

/**
 * _strncat - appends n bytes to array
 * @dest: destination
 * @src: source
 * @n: byte to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies strings
 * @dest: destinatn
 * @src: source
 * @n: no of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares strings
 * @s1: string1
 * @s2: string2
 * Return: less than 0, 0, greater than 0
 */

int _strcmp(char *s1, char *s2);



#endif
