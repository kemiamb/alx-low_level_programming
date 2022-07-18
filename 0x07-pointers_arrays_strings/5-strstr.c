#include "main.h"
/**
 * _strstr - locates a substring in the string haystack
 * @haystack: entire string
 * @needle: the substring
 * Return: pointer to the beginning of located substring or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhay;
	char *pnee;

	while (*haystack != '\0')
	{
		bhay = haystack;
		pnee = needle;

		while (*haystack != '\0' && *pnee != '\0' && *haystack == *pnee)
		{
			haystack++;
			pnee++;
		}
		if (!*pnee)
			return (bhay);
		haystack = bhay + 1;
	}
	return (0);
}
