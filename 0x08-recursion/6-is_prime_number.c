#include "main.h"
/**
 * is_prime_number - returns 1 if the input nteger is a prime number
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if it is prime otherwise return 0
 */
int prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, i + 1));


int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	else
		return (prime(n, 2));
}
