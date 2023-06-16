#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: pointer of  a dlistint_t list head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	temp = NULL;
}
