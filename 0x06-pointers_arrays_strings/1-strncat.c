#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n:max value allowed
 * Return: void
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] !> n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
