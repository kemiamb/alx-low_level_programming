#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argc: arguments count
 * @argv: argument vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[] MY_ATTRIBUTE((unused)))
{
	printf("%d\n", argc);
	return (0);
}
