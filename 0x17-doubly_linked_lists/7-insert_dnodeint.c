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
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to pointer to a dlistint_t linked list head.
 * @idx: position we want to insert the new node.
 * @n: new node data.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *node_pos = NULL;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else if (idx == (dlistint_len(*h) - 1))
		new_node = add_dnodeint_end(h, n);
	else
	{
		node_pos = get_dnodeint_at_index(*h, idx);
		if (node_pos == NULL)
			return (NULL);
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			fprintf(stderr, "Can't malloc\n");
			return (NULL);
		}
		new_node->n = n;
		new_node->prev = node_pos->prev;
		new_node->next = node_pos;
		node_pos->prev = new_node;
		new_node->prev->next = new_node;

	}
	return (new_node);
}
