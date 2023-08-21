#include "main.h"

/**
* print_rev - printing strings in reverse
* @s: string to be reversed
*/

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
