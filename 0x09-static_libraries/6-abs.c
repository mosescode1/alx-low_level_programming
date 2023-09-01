#include "main.h"
/**
 *  _abs - computes the absolute value of the integer
 *  @n: the integer for which to compute the absolute value
 *
 *  Return: the absolute value of 'n'
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
