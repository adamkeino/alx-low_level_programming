#include "lists.h"
/**
 * add_nodeint - adds a node to the list
 * @head: pointer to pointer to start of list
 * @n: Integer
 * Return: address of new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
