#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to pointer of a dlistint_t list head.
 * @n: new node data
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Can't malloc\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
