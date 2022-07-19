#include "main.h"
/**
 * is_prime_number - returns 1 if the input nteger is a prime number
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if it is prime otherwise return 0
 */
int is_prime_number(int n)
{
	int i = 2;


	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (is_prime_number( i + 1, n));
}
		
