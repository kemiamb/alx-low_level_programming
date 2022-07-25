#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: argumnens
 * @argv: argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
