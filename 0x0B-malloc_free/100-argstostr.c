#include "main.h"
#include <stdlib.h>
/**
 * argstostr - lets connects arguments.
 * @ac: The number of string to be connected.
 * @av: The strings to be connected.
 * Return: 0 String connected.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *concat = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	concat = malloc(sizeof(char) * (k + ac + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			concat[k] = av[i][j];
		concat[k] = '\n';
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
