#include "main.h"
/**
 *_islower-check if it is lowercase
 *@c:The character to check
 *Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
