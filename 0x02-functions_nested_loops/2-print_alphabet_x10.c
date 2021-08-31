#include "main.h"
/**
 *prints 10 times the alphabet, in lowercase, followed by a new line.
 *no return
 */
void print_alphabet_x10(void)
{
	int a;
	char b='a';
	while(b<='z')
	{
		for (a = 0; a < 10; a++)
		{	_putchar(b);
		}
		b++;
	}

}
