#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the initializing char
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p[0] += c;
		return (p);
	}
}
