#include "main.h"
/**
 * binary_to_uint - converting binary to unsigned int
 * @b: pointer to the string of binary
 * Return: return the converted bit
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		deec = 2 * dec + (b[z] - '0');
	}
	return (dec);
}
