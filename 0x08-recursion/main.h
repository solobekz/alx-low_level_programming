#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints char to standard output
 * @c: char to print
 * Return: ascii for the char
 */

int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints string in rev
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Return: length
 */

int  _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of an integer
 * @n: integer
 * Return: the factorial
 */

int factorial(int n);

/**
 * _pow_recursion - returns the result of x raised to pwr y
 * @x: the integer
 * @y: the power
 * Return: the result
 */

int _pow_recursion(int x, int y);

/**
 * power_op - finds squareroot
 * @n: integer
 * @c: probable roots
 * Return: result
 */

int power_op(int n, int c);

/**
 * _sqrt_recursion - finds squareroot
 * @n: integer
 * Return: result
 */

int _sqrt_recursion(int n);

/**
 * is_prime - checks for prime number
 * @n: int
 * @c: iterator
 * Return: 0 or 1
 */

int is_prime(unsigned int n, unsigned int c);

/**
 * is_prime_number - checks for prime numbers
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n);




#endif
