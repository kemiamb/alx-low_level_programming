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
	int *ptr;


	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int));
	
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
