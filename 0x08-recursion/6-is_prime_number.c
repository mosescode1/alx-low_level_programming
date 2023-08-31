#include "main.h"
int primeNumber(int n, int m);
/**
* is_prime_number - Entry point
* @n: checking prime number
* Return: the prime number
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!primeNumber(n, n - 1));
}

/**
* primeNumber - Entry point
* @n: checked num
* @m: divider
* Return: value
*/

int primeNumber(int n, int m)
{
	if (m == 1)
	{
		return (0);
	}
	if (n % m == 0)
	{
		return (1);
	}
	return (primeNumber(n, m - 1));
}
