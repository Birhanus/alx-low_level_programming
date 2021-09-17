#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *
  *
  *
  *
  */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;
	
	if (argc < 2)
	{
		printf("Error");
	}
	else
	{

	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	}
	return (0);

}
