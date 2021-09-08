#include "main.h"
/**
 *_strcat-function concatenate strings
 *@dest:destenation
 *@src:sourse
 *Return:character
 */
char *_strcat(char *dest, char *src)
{
	*dest = *dest + *src;
	return (*dest);
}
