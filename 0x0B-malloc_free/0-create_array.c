#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to display
 * Return: NULL if size = 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;


	if (size == 0)
		return (NULL);

	str = malloc(sizeof(c) * size);

	if (str == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}	
