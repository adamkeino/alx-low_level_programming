#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - points to a duplicate string
 * @str: the string to compare
 * Return: pointer to the duplicate or NULL
 */

char *_strdup(char *str)
{
	char *m;

	if (str == NULL || m == NULL)
	{
		return (NULL);
	}
	else if (m == str)
	{
		return (m);
	}
	else
	{
		return (NULL);
	}
}
