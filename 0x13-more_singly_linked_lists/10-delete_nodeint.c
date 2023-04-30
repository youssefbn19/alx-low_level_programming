#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at the given index
 *
 * @head: Pointer to point to the first node of a linked list
 * @index: The position of the node to be deleted
 *
 * Return: 1 if the node is deleted, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *curr = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	else if (*head == NULL)
		return (-1);

	prev = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		prev = NULL;
	}
	else
	{
		curr = prev->next;
		while (i < (index - 1))
		{
			if (curr == NULL)
				return (-1);
			prev = curr;
			curr = curr->next;
		}

		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}

	return (1);
}
