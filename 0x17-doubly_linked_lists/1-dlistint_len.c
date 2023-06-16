#include "lists.h"
/**
 * dlistint_len - the number of elements in a linked dlistint_t list.
 *
 * @h: pointer to a dlistint_t list header
 *
 * Return: number of nodes in a dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *temp = NULL;

	if (h)
	{
		temp = h;
		while (temp)
		{
			num_nodes++;
			temp = temp->next;
		}
	}
	return (num_nodes);
}
