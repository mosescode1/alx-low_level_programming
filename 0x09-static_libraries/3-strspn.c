#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: the string to be searched
* @accept: the string containing characters to match
* Return: The number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				length++;
				break;
			}
		}
		if (!accept[b])
			break;
	}

	return (length);
}
