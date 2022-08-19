#include "main.h"
/**
 * get_bit - gets bit at a given index
 * @n: bit to traverse
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
