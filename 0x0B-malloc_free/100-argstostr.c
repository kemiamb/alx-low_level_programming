#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments used
 * @ac: count of arguments
 * @av: vector of arguments
 * Return: a pointer to the string
 */
char *argstostr(int ac, char **av)
{
	int size;
	char *s;
	int i, j, k;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	size += (ac + 1);
	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	s[k] = '\0';

	return (s);
}
