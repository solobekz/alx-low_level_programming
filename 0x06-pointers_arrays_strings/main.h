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


#endif