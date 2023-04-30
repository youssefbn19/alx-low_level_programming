#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees nodes in a linked list
 *
 * @head: Pointer to point to the first node of a linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	temp = NULL;
}
