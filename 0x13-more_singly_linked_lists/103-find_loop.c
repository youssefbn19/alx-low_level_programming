#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the first node in a listint_t linked list
 *
 * Return: The address of the node where the loop starts.
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t  *detect = NULL, *lastNode = NULL;

	if (head == NULL)
		return (NULL);

	detect = detect_cycle(head);

	if (detect == NULL)
		return (NULL);

	lastNode = last_node(head, detect);
	return (lastNode->next);
}
