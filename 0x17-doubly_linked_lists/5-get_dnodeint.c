#include "lists.h"
/**
 * get_dnodeint_at_index - returns node of a dlistint_t linked list
 * in a given index.
 *
 * @head: pointer to a dlistint_t linked list head.
 * @index: index of the node that we want to return.
 *
 * Return: the node if exists in the given index, Null if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int curr_indx = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (curr_indx == index)
			return (temp);
		temp = temp->next;
		curr_indx++;
	}
	return (NULL);
}
