#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/* this while loop causes infinite looping since value of i doesn't decrement */
	while (i < 10);
	{
		putchar(i);
	}
	
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
