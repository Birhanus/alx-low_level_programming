#include "search_algos.h"

/**
  *linear_search - Seach for a value in an array of integers using
  * Linear search algorithm
  *@array: Pointer to the first elment of the array to search in
  *@size: Is the number of elements in arry
  *@value: Is the value to search for
  *Return: return the first index where value is locted
  *
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for(i = 0; i <= size; i++)
	{
		printf("Value chacked  array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);

}
