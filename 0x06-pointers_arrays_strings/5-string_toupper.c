#include "main.h"

/**
* *string_toupper - changing to upper case
* @n: input value
* Return: always 0
*/

char *string_toupper(char *n)
{
	char *ptr = n;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (0);
}
