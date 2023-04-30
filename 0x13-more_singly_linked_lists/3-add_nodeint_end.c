#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a linked list
 *
 * @head: double Pointer to point to the first node of a linked list
 * @n: decimal number
 *
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL, *temp = NULL;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = newNode;
	}

	return (*head);
}
