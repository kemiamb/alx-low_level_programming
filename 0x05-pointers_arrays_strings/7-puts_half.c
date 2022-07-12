#include "main.h"
#include "2-strlen.c"
/** puts_half - prints half of a string
 * @str: string to  be printed
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int c = 0;

	for (; c >= 0; c++)
	{
		if  (str[c] === '\0')
			break;
	}
	if (c % 2 == 1)
	{
		i = c / 2;
	}
	else
	{
		i = (c - 1) / 2
	}
	for (i++; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
