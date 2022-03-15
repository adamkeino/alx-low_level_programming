#include<stdio.h>

/**
 * main - Calls print_alphabet function
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
