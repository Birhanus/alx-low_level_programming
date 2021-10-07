#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));
/**
 *myStartupFun - excute before main function
 *Return: Nothing
 *
 *
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("nI bore my house upon my back!\n");
}
