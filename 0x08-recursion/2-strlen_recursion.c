#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length  of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}


