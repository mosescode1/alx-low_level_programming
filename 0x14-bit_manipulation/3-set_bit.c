#include "main.h"
/**
 * set_bit - number to set bit 
 * @n: pointer 
 * @index: index of number
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i = index;

	if (i > 63)
		return (-1);

	*n = ((1UL << i) | *n);
	return (1);
}
