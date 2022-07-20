#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be squared
 * Return: square root or -1 if it is not natural
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 * helper - another functin to solve the square root problem
 * @i: if it is a square root
 * @j: incrementer
 * Return: squre root if natural or - 1 if not
 */

int helper(int i, int j)
{
	int sqr = j * j;

	if (sqr == i)
		return (j);
	if (sqr < i)
		return (helper(i, j + 1));
	if (sqr > i)
		return (-1);
	return (0);
}
