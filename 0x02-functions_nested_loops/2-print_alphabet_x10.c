#include "main.h"

/**
 * print_alphabet_x10 - making lowercase alphabet
 *
 * desceription: printing loewercase alphabets
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet_x10(void)
{
	char c;
	int count;

	for (count = 1; count <= 10 ; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
