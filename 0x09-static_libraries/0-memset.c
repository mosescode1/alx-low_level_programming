#include "main.h"
#include <string.h>

/**
* *_memset - fills memory with constant byte
* @s: pointer
* @b: character to replace the memory address
* @n: number of character to be replaced
* Return: pointer to be returned
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
