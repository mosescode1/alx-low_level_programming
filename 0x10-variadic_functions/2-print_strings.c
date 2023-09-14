#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings  - print numbers available
 * @n: size of itereation
 * @separator: seperator ,
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		const char *p = va_arg(print, const char *);

		if (p == NULL)
		{
			printf("(nill");
		}
		else
		{
			printf("%s", p);
		}
		if (separator && i < n)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(print);
}

