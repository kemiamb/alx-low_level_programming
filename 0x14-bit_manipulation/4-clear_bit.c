#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - sets the value of bit to 0
 * @n: integer to traverse
 * @index: index to the bit
 * Return: 1 if it worked or -1 in case of error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
