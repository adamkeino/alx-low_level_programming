#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - points to a duplicate string
 * @str: the string to compare
 * Return: pointer to the duplicate or NULL
 */

char *_strdup(char *str)
{
	unsigned int size = strlen(str);
	char *m = (char *)malloc(size * sizeof(char));
	int i;


	if (str == NULL || m == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			m[i] = str[i];
		}
		return (m);
	}
}
