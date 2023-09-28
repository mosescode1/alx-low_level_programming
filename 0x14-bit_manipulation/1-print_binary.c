#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int c;
	int next = 0;
	int num;

	for (c = 63; c >= 0; c--)
	{
		num = n >> c;
		if (num & 1)
		{
			_putchar('1');
			next++;
		}
		else if (next)
			_putchar('0');
	}
	if (!next)
		_putchar('0');
}
