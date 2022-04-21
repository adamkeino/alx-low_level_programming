#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node to list
 * @head: pointer to pointer to list beginning
 * @str: a string in the node
 * Return: address of new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	
	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	newNode = (list_t *)malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	
	return (newNode);
}
