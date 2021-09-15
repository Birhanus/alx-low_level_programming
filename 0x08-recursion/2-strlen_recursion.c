#include "main.h"
/**
 *_strlen_recursion- print length 
 * @s: string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int n;
		
		_strlen_recursion(s + 1);
		n++;
		return (n);
	}
}
