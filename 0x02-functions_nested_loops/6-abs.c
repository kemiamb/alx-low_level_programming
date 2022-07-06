#include "holberton.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 *Return: 1 for positive num, -1 for negative num or zero for anything else
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		
		return (abs_val);
	}

	return (c);
}
