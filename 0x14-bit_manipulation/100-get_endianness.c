#include "main.h"

/**
 * get_endianness - get end
 * Return: pointer
 */

int get_endianness(void)
{
	unsigned int c = 1;
	char *v = (char *) &c;

	return (*v);
}
