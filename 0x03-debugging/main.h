#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - prints the sign of a number
 */

void positive_or_negative(int i);

/**
 * largest_number - check the largest number among 3 integers
 */

int largest_number(int a, int b, int c);

/**
 * print_remaining_days - takes a date and prints how many days are left in the year, taking leap years into account
 */

void print_remaining_days(int month, int day, int year);

/**
 * convert_day - converts day of month to day of year, without accounting
 */

int convert_day(int month, int day);


#endif /* MAIN_H */
