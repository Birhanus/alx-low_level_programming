#include "main.h"
/**
*_puts_recursion - print character
* @s: string
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		int n = 1;
		n++;
		_puts_recursion(s + 1);
		return (n);
	}
}
