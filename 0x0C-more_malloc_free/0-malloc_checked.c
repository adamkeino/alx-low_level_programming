#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size in bytes
 * Return: pointer to the memory created.
 * if malloc fails, exit with status 98
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
