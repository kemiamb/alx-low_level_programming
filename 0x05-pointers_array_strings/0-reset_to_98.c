#include "main.h"
/**
 * reset_to_98 - takes a pointer and updates the value to 98
 * return: always 0 (success)
 *@n: int to be changed
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	*p = &n;
	*p = 98;
	return (*p);
}
