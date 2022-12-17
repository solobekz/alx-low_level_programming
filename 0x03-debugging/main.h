#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - prints the sign of a number
 * @i: char to check
 */

void positive_or_negative(int i);

/**
 * largest_number - check the largest number among
 * 3 integers
 * @a: integer 1
 * @b: integer 2
 * @c: integer 3
 * Return: largest number
 */

int largest_number(int a, int b, int c);

/**
 * print_remaining_days - takes a date and
 * prints how many days are left in the year
 * taking leap years into account
 * @month: month
 * @day: year in days
 * @year: year
 */

void print_remaining_days(int month, int day, int year);

/**
 * convert_day - converts day of month to dayof the year, without accounting
 * @month: month
 * @day: day of the month
 * Return: day
 */

int convert_day(int month, int day);


#endif /* MAIN_H */
