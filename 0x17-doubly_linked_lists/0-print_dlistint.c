#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t m;

	m = 0;
	for (m = 0; h != NULL; m++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (m);
}
