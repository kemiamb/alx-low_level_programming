#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a two dimensional aray
 * @width: width of the array
 * @height: size of the array
 * Return: pointer to the array
 */ 
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **ptr;


	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			free[i][j] = 0;

	return (ptr);
}
