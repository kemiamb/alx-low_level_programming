#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * @str: string
 * Return: pointer to the duplicated stringor null if insufficient memory
 */
char *_strdup(char *str)
{
	char *strcpy;
	unsigned int i, j;


	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		strcpy = (char *)malloc(sizeof(char) * i);

	if (strcpy == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strcpy[j] = str[i];

	return (strcpy);
