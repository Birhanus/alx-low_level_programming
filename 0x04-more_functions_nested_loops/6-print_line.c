#include "main.h"
/**
 *print_line-function that draws a straight line
 *@n: number
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	else
		_putchar('\n');
}
