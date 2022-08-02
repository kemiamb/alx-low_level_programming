#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the odg
 * @owner: owner of the dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, c1, c2;
	char *n, *o;
	dog_t *adog;

	c1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		c1++;
	c2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		c2++;
	adog = malloc(sizeof(dog_t));
	if (adog == NULL)
		return (NULL);
	n = malloc((c1 + 1) * sizeof(char));
	if (n == NULL)
	{
		free(adog);
		return (NULL);
	}
	for (i = 0; i < c1; i++)
		n[i] = name[i];
	a[i] = '\0';
	adog->name = n;
	adog->age = age;

	o = malloc((c2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(n);
		free(adog);
		return (NULL);
	}
	for (i = 0; i < c2; i++)
		o[i] = owner[i];
	o[i] = '\0';
	adog->owner = o;

	return (adog);
}	
