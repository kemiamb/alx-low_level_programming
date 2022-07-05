#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char line[] = "_putchar" ;
	int i;


	for (i = 0; i < 8; i++)
	{
		_putchar(line[i]);
	}
	_putchar('\n');
	return (0);
}
