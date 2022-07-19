#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: input value
 * @y: power to be raised
 * Return: power or -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(x)));
}
