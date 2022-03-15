#include "main.h"

/**
 * main - calls print alphabet function
 *
 * Return: 0
 */

/* this function prints the alphabet*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
