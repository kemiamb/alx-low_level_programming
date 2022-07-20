#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if it is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = check(s) - 1;
	return (pal(s, --length));
}

/**
 * check - get the length of a string
 * @s: string
 * Return: the length of the string
 */
int check(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + check(++s));
}

/**
 * pal - recursion of palindrome
 * @s: string
 * @l: string's length
 * Return: 1 if it is a palindrome or  0 if it is not
 */
int pal(char *s, int l)
{
	if (*s == *(s + 1))
	{
		if (l < 0)
			return (0);
		else
			return (pal(++s, l - 2));
	}
	else
		return (0);
}
