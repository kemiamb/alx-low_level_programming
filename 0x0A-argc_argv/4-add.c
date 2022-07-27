#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)
/**
 * main - add two numbers
 * @argc: arguments
 * @argv: argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	if (!isdigit(argv))
	{
		printf("Error\n");
		return (1);
	}

	if (argv != '\0')
	{
		printf("0\n");
	}

	return (0);
}
			
