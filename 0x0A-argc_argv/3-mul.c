#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplication of 2 numbers
 * @argc: arguments
 * @argv: arguments vector
 * Return: multiplication
 */
int main (int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1] * atoi(argv[2]));
	return (0);
}
