#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional previously created
 * @grid: grid created
 * @height: heigth of the grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >+ 0; height--)
			free(grid[height]);
		fre(grid);
	}
}
