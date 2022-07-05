#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char line[8] = "_putchar";
	int i;


	for (i = 0; i < 8; i++)
	{
		putchar(line[i]);
	}
	putchar('\n');
	return (0);
}
