#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argc: arguments count
 * @argv: argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[] __attribute __((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
