#include <stdio.h>
#include "main.h"
/**
 * create-array - creates an array of chars
 * @size: size of the array
 * @c: char to display
 * Return: NULL if size = 0 or pointer to the array
 */
char *create-array(unsigned int size, char c)
{
	unsigned int i;
	char *str


	size = malloc(sizeof(c) * size);
	if (size == 0)
		return (NULL);
	if (str == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}	
