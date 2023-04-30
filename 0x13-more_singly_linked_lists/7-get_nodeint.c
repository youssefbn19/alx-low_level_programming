#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - search for a node in a given index
 *
 * @head: Pointer to point to the first node of a linked list
 * @index: node index
 *
 * Return: node in a given index if it's found, NULL if it's not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}

	return (temp);
}

