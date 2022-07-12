#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array of integers
 * @n: number of  element  to be printed
 * @a: array to be displayed
 * Return: no return
 */
void print_array(int *a, int n)
{
	int  i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
