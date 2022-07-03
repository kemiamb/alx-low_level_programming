#include <stdio.h>
/**
 * main - prints combination from 0 to 89
 *
 * Return : always 0 (success)
 */
int main(void)
{
	int f = 48;
	int l = 48;

	while (l < 58)
	{
		f = 48;
		while (f <58)
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
