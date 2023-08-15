#include "main.h"

/**
 * print_alphabet - making lowercase alphabet
 *
 * desceription: printing loewercase alphabets
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
