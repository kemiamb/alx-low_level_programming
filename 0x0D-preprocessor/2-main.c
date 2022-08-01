#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the file it was compiled from
 * Return : always 0 on success
 */
int main(void)
{
	printf("%s\n", __SIZE__);
	return (0);
}
