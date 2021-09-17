#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - multiplies of arguments
  *@argc: number of argument
  *@argv: array of argument
  *Return: int
  */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
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
