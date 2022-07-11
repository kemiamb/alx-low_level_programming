#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first value
 * @b: second value
 * return: no return
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
