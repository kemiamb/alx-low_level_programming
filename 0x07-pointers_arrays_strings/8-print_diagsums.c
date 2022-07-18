#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */

void print_diagsums(int *a, int size)
{

	int i,
	int sum1 = 0,
	int sum2 = 0;


	for (i = 0; i < size; i++)
	{

		sum1 += a[(i * size) + i];
		sum2 += a[(size - 1) + ((size - 1) * i)]
	}

	printf("%d, %d\n", sum1, sum2);
}
