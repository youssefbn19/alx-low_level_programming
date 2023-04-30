#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: Pointer to point to the first node of a linked list
 * @idx: The position where the new node should be located
 * @n: new node data
 *
 * Return: the new node address, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL, *newNode = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
	}
	else
	{
		while (i < (idx - 1))
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
			i++;
		}

		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
