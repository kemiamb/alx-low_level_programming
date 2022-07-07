#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * Return: always 0
 */
int main(void)
{

	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%d\n", fp);
	return (0);
}
