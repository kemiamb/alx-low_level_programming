#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: size allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *t;


	t = malloc(b);
	if (t == NULL)
	{
		exit (98);
	}
	return (t);
}
