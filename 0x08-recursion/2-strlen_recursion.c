#include "main.h"
/**
 * _strlen_recursion - finds string length
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	counter = 0;

	if (*s != '\0')
		counter++;
	return (counter);
}
