#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: frist string
 * @s2: second string
 * Return: the pointer to the new space
 */
char *str_concat(char *s1, char *s2)
{
	int i, con1, con2;
	char *c;

	i = 0;
	con1 = 0;
	con2 = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while ((s1[con1] != '\0') && (s2[con2] != '\0'))
	{
		con1++;
		con2++;
	}

	c = malloc(sizeof(char) * (con1 + con2 + 1));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < con1; i++)
	{
		c[i] = s1[i];
	}

	for (i = 0; i < con2; i++)
	{
		c[i + con1] = s2[i];
	}
	c[i + con1] = '\0';
	return (c);
}
