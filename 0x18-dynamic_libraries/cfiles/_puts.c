#include "main.h"

/**
 * _puts - skip and write
 * @s: string
 * Return: nothing
 */

void _puts(char *s)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[counter]);
		counter++;
	}
}
