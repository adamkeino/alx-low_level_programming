#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates commandline arguments
 * @ac: number of arguments
 * @av: pointer to pointer to array of arguments
 * Return: pointer to a new string
 */

int *argstostr(int ac, char **av)
{
	char *ans;
	int i, j;

	if (ac == 0 || *av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
		;
	
	ans = malloc(sizeof(char) * (j + 1));
	
	if (ans == NULL)
	{
		free(ans);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		ans[i] = *av[i + 1];
		putchar('\n');
	}
	return (0);
}
