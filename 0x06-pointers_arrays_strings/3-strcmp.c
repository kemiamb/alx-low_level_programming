#include "main.h"
/**
 * _strcomp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equals another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp = 0;


	while (cmp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		cmp = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (cmp);
}
