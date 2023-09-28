#include "main.h"

/**
 * clear_bit - clear bit
 * @n: number
 * @index:  index of number
 * Return: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = index;

	if (i > 63)
		return (-1);

	*n = (~(1UL << i) & *n);
	return (1);
}
