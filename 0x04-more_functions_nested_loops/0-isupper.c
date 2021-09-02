#include "main"

/**
 *_isupper-function check uppercasw
 *@c: Character to check
 *Return:1 if upper case, 0 if not
 */
void _isupper(char c)
{
	if (c >= '65' && c <= '90')
		_putchar('1');
	else
		_putchar('0');

}
