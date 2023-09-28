#include "main.h"

/**
 * flip_bits - fliping 
 * @n: numberi 1
 * @m: number 2
 * Return: value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, next = 0;
	unsingned long int nit, pre = n ^ m;

	for (b = 63; b >= 0; a--)
	{
		nit = pre >> b;
		if (nit & 1)
			next++;
	}
	return (next);
}
