#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
/**
 *positive_or_negative-function to check number postive or negative
 *
 */
int positive_or_negative(int i);
/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 */
int largest_number(int a, int b, int c);

int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif
