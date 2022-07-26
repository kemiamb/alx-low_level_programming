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
	int i = 0, j, k = 0;


	if (str == NULL)
		return (NULL);

	while (str[k] != '\0')
	{
		i++;
		k++;
	}

	strcpy = malloc(sizeof(char) * (i + 1));

	if (strcpy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strcpy[j] = str[j];

	return (strcpy);
}
