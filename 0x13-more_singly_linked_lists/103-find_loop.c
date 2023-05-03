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
	listint_t  *slow = NULL, *fast = NULL;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (fast);
	}

	return (NULL);
}
