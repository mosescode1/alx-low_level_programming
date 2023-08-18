#include "main.h"

/**
* print_triangle - printing triangle
* @size: triangle size
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
			for (j = 1; j <=  size; j++)
			{
				for (i = 0; i < size - j; i++)
				{
					_putchar(' ');
				}
				for (i = 0; i < j ; i++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
	}

}
