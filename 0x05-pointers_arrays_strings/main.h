#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints a character
 * @c: char to be printed
 * Return: 0
 */

int _putchar(char c);

/**
 * reset_to_98 - changes a var value to 98
 * @n: a pointer to the address of the variable
 * Return: void
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of 2 variables
 * @a: first int
 * @b: second int
 * Return: void
 */

void swap_int(int *a, int *b);

/**
 * _strlen - checks the length of a string
 * @s: the string checked
 * Return: result
 */

int _strlen(char *s);

/**
 * _puts - prints strings
 * @str: string to print
 * Return: void
 */

void _puts(char *str);

/**
 * print_rev - prints strings in reverse
 * @s: string to print
 * Return: void
 */

void print_rev(char *s);

/**
 * rev_string - reverse strings
 * @s: string to rev
 * Return: void
 */

void rev_string(char *s);

/**
 * puts2 - prints every other char 
 * *str: string to print
 * Return: void
 */

void puts2(char *str);

/**
 * puts_half - prints 2nd half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str);


#endif
