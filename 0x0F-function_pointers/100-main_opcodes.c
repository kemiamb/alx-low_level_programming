#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nby;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nby = atoi(argv[1]);

	if (nby < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nby; i++)
	{
		printf("%02x", opc[i] & 0XFF);
		if (i != nby - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
