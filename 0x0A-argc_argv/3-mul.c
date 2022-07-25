#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplication of 2 numbers
 * @argc: arguments
 * @argv: arguments vector
 * Return: always 0 on success
 */
int main (int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", atoi(argv[1] * atoi(argv[2]));
	}
	return (0);
}
