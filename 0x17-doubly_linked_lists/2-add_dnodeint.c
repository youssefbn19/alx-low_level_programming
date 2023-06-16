#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: pointer to pointer to a dlistint_t list header
 * @n: new node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Can't malloc data\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
		new_node->next = NULL;

	*head = new_node;
	return (new_node);
}
