#include "main.h"
/**
 *print_alphabet_x10-print lowercase alphabet ten times
 *Return: 0
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
