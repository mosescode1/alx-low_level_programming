#include "main.h"

/**
* print_line - draw a straight line in terminal
* @n: parameter to be input
*/

void print_line(int n)
{
	int j;
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = 0; j < n; j++)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
}
