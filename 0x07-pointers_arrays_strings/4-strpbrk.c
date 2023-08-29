#include "main.h"
#include <strings.h>

/**
* *_strpbrk - search a string fot any set of bytes
* @s: pointer 1
* @accept: pointer 2
* Return: returns a value
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
