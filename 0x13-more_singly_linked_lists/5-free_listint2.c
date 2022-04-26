#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: pointer to pointer to start of list
 * return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
