#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 * Return: 0
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c);

/**
 * _isdigit - checks if a char is digit
 * @c: char to check for
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c);

/**
 * mul - multiplies 2 integers
 * @a: first int
 * @b: 2nd int
 * Return: result
 */

int mul(int a, int b);

/**
 * print_numbers - prints 0-9 and newline
 * Return: void
 */

void print_numbers(void);

/**
 * print_most_numbers - prints 0-9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void);

/**
 * more_number - prints 0-14 10 times
 * Return: void
 */

void more_numbers(void);

/**
 * print_line - prints line
 * @n: char to print
 * Return: void
 */

void print_line(int n);


#endif
