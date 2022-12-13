#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - print lowercase
 */

void print_alphabet(void);

/**
 * print_alphabet - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 */

int _islower(int c);

/**
 * _isalpha - checks for alphabet character
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of numbers
 */

int print_sign(int n);

/**
 * _abs - computes absolute value of integer
 */

int _abs(int);

/**
 * print_last_digit - prints last digit of a number
 */

int print_last_digit(int);

/**
 * jack_bauer - prints 00:00 to 23:59 timer
 */

void jack_bauer(void);

/**
 * times_table - print the 9 times table
 */

void times_table(void);

/**
 * add - adds two integers
 */

int add(int, int);

/** 
 * print_to_98 - prints number from n to 98
 */

void print_to_98(int n);


#endif
