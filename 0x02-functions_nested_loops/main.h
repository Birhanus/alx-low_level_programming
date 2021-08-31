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
#endif
