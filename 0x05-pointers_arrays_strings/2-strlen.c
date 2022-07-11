#include "main.h"
/**
 * _strlen - returns the lengthh of a string
 * @s: input string
 * return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
