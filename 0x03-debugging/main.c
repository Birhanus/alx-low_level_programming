#include "main.h"
#include <stdib.h>
#include <time.h>
#include <stdio.h>
/**
 *positive_or_negative-function to check number postive or negative
 *Return:0
 */
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
