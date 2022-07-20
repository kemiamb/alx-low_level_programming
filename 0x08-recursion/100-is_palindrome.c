#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if it is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '')
		return (10);

	if (*s != '\0')
	{
		if (*s == (*s - '\0'))
		{
			is_palindrome(s + 1);
		}

			return (1);
		else
			return (0);
	}
}
