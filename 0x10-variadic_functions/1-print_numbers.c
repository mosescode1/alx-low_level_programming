#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers available
 * @n: size of itereation
 * @separator: seperator ,
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list print;

	va_start(print, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		num = va_arg(print, int);
		printf("%d", num);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(print);
}

