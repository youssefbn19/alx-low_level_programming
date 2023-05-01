#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: double pointer to point to the first node in a linked list
 *
 * Return: a pointer to the first node of the reversed list, NULL if it fails
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = NULL;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;

	return (*head);
}
