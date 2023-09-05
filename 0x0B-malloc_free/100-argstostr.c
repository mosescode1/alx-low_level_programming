#include "main.h"
#include <stdlib.h>
/**
* argstostr - entry point
* @ac: int input
* @av: double pointer
* Return: NULL
*/

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, f = 0;
	char *str;
	
	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			f++;
		}
	}
	f += ac;
	ptr = malloc(sizeof(char) * f + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
