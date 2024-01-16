#include "main.h"
#include <stddef.h>

/**
* *_strchr - locates a string in a character
* @s: first pointer
* @c: second parameter
* Return: null
*/

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	return (NULL);
}
