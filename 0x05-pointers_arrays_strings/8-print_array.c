#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array of integers
 * @n: number of  element  to be printed
 * Return: no return
 */
void print_array(int *a, int n)
{
	int  i;

	for (i = 0; i < n; i++)
	{
		if (i = n - 1)
		{ 
			printf("%d", *(a + i));
		}
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
