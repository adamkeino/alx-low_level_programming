#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a key
 * Return: 0
 */

int main(void)
{
	int m = 0, n = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (n < 2772)
	{
		m = rand() % 128;
		if ((n + m) > 2772)
			break;
		n = n + m;
		printf("%c", m);
	}
	printf("%c\n", (2772 - n));
	return (0);
}
