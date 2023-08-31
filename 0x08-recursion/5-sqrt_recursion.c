#include "main.h"
int naturalSquare(int n, int m);
/**
* _sqrt_recursion - Entry Point
* @n: sqrt number
* Return: naturalSquare
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (naturalSquare(n, 0));
}
/**
* naturalSquare - indirect recursion
* @n: sqrtnum
* @m: input value
* Return: value
*/

int naturalSquare(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (naturalSquare(n, m + 1));
}
