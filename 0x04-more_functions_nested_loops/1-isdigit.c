#include "main.h"
/**
 *_isdigit-functions check digit
 *@c: character
 *Return: 1 if digit, o if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);

}
