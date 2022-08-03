#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function given as a parameter
 * @array: array 
 * @size: size of the array
 * @action: a pointer to the function needed
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL && action == NULL)
		return (98);
	for (i = 0; i < size; i++)
		action(array[i]);
}
