#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - Function
 * @b:parameter
 *
 * Return: test
**/

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
