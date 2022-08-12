#include <stdio.h>
/**
 * start_print - prints a string before the main function
 * Return: no return
 */
void __attribute__ ((constructor)) start_print()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
