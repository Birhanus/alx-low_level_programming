#include "main.h"
/**
 *print_diagonal-function that draws a diagonal line 
 *@n: number
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar(' ');
		_putchar('\\');
	}
	else
		_putchar('\n');
}
