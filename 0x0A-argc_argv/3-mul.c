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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

       return (0);
	}
	else
		printf("Error\n");
	return (1);
}
