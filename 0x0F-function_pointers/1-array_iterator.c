#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate through the array
 * @array: array to iterate
 * @size: size of the array
 * @action: acton to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == NULL || action == NULL)
	{
		exit (98);
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
