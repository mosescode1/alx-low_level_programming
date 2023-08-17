#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: parammeter input
 */

void print_diagonal(int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		_putchar('\n');
	}
}
