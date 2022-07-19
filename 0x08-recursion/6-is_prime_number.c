#include "main.h"
/**
 * is_prime_number - returns 1 if the input nteger is a prime number
 * @n: number to be checked
 * Return: 1 if it is prime otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	if (n / 1 == n && n / n == 1)
		return (1);
}

		
