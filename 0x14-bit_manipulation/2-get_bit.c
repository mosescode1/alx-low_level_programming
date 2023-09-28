#include "main.h"
#include <stdio.h>
/**
 * get_bit - getting bit
 * @n: number of int
 * @index: index number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get_v;

	if (index > 63)
		return (-1);


	get_v = (n >> index) & 1;

	return (get_v);
}
