#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f = 48;
	int l = 48;

	while (l < 58)
	{
		f = 48;
		while (f < 58)
		{
			if (l != f && l < f)
			{
				putchar(l);
				putchar(f);
				if (f == 57 && l == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			f++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
