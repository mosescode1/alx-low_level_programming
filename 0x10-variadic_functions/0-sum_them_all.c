#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function to sum all number
 * @n: number of iteration
 * Return: num
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list sum;

	va_start(sum, n);
	num = 0;

	for (i = 0; i < n; i++)
	{
		num += va_arg(sum, int);
	}
	return (num);
}

