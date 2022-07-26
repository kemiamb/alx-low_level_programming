#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication of twi arguments
 * @argc: arguments
 * @argv: vector of argument
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

       return (0);
}       
