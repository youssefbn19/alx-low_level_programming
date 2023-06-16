#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: pointer to a dlistint_t list header
 *
 * Return: number of nodes in a dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *temp = NULL;

	if (h)
	{
		temp = h;
		while (temp)
		{
			printf("%d\n", temp->n);
			num_nodes++;
			temp = temp->next;
		}
	}
	return (num_nodes);
}
