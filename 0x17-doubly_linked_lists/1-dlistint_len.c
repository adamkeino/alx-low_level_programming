#include "lists.h"

/**
 * dlistint_len - finds number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ans;

	ans = 0;
	while (h != NULL)
	{
		h = h->next;
		ans++;
	}
	return (ans);
}
