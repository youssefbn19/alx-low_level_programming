#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: Double Pointer to point to the first node of a linked list
 *
 * Return: Deleted head node data `n`. 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n = 0;

	if (*head == NULL)
		return (n);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	temp = NULL;

	return (n);
}
