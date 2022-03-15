#include "main.h"

/**
 * main - calls print alphabet function
 * print_alphabet - Prints alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
