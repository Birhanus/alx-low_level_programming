#include "main.h"
/**
 *prints 10 times the alphabet, in lowercase, followed by a new line.
 *no return
 */
void print_alphabet_x10(void)
{
	int a = 1;
	char b;

	while (a < 10)
	{
		for (b = 'a'; b < 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}

}
