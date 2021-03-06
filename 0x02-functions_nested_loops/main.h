#ifndef _MAIN_H_
#define _MAIN_H_
/**
 *_putchar writes the character a to stdout
 *@c: the character to print
 */
int _putchar(char a);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 *10 times the alphabet,in lowercase,follwed by anew line
 *no return
 */
void print_alphabet_x10(void);

/**
 *_lower-check if is lowrcase
 *@c:The character to check
 */
int _islower(int c);

/**
 *_isalpha-cecks for alphabetic character
 *@c:character to check
 */
int _isalpha(int c);

/**
 *print_sign-print the sign of the number
 *@n:n is the number
 *Return:integer
 */
int print_sign(int n);

/**
 *int_abs-compute absoulute value of integer
 *Return: integer
 *
 */
int _abs(int);
/**
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: last digit of number
 */
int print_last_digit(int);

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */
void jack_bauer(void);

/**
 * times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n);

#endif
