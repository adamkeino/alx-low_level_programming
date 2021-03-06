#include "lists.h"
/**
 * pop_listint - prints value in head and deletes it
 * @head: pointer to pointer to head
 * return: the value in head before it's deleted
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node = *head;

	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}
