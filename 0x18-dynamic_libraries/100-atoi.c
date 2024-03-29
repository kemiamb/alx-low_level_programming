#include "main.h"
//#include "2-strlen.c"
/**
 * _atoi - converts a srting into an integer
 * @s: string to be converted
 * Return: an integer value
 */
int _atoi(char *s)
{
	int i, c;
	int np = 0;
	int d = 1;
	int num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && c > 0)
			break;
		if (s[i] == '-')
			np--;
		if (s[i] == '+')
			np++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		num += ((s[i - 1] - '0' * d));
				i--;
				c--;
				d *= 10;
	}
	if (np >= 0)
		num *= 1;
	else
		num *= -1;
	return (num);
}

