#include "main.h"
/**
 *prints 10 times the alphabet, in lowercase, followed by a new line.
 *Return void
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}

}
