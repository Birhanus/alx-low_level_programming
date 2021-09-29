#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: array
 * @size: size of the array
 * @cmp: s a pointer to the function to be used to compare values
 * Return: integers a pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1)
}
