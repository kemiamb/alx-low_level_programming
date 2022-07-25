#include <stdio.h>
#include <stdlib.h>
/**
 * program that prints its name without removing its path before its name
 * @argc: arguments
 * @argv: vector of arguments
 * Return: always 0 on success
 */ 
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
