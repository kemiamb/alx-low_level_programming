#include <unistd.h>
#include "main.h"

/**
 * create a putchar function
 *
 * return: always 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
