#include "main.h"
/**
* _strstr - locates a substring
* @haystack: The string to be searched.
* @needle: The substring to locate.
* Return: a pointer to the beginning of the located substring, otherwise 0
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	if (!*needle)
		return (haystack);

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (0);
}
