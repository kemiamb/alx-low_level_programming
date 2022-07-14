#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string
 * Return: the pointer to destt
 */
char *leet(char *s)
{
	int c = 0;
	int i;
	int lletter[] = {97, 101, 111, 116, 108};
	int uletter[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + c) == lletter[i] || *(s + c) == uletter[i])
			{
				*(s + c) = num[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
