#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_unit - converting binary to unsigned int
 * @b: pointer to the string of binary
 * Return: return the converted bit
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int d = 0, bse = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				d += bse;
			}
			bse *= 2;
		}
		else
		{
			d = 0;
			return (d);
		}
	}

	return (d);
}
