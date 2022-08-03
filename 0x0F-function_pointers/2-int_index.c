#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - index search
 * @array: array to search
 * @size: size of the array
 * @cmp: function 
 * Return: index of the first element or -1 if no element match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
