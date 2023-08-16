#include "main.h"

/**
 * print_times_table - prints all natural number starting from 0
 *
 * @i: first loop value 
 * @j: second loop value 
 * @n:  inputed value to be checked
 */
void print_times_table(int n)
{
	int i; 
	int j;
	int k;

	if (n >= 0 &&  n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n ; j++)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar('0' + k);
				}
				else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
