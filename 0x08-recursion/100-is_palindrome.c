#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if it is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	
	if (*s != '\0')
	{
		_puts_recursion(s) == _print_rev_recursion(s)
			return (1);
	}
	else
		return (0);
}
