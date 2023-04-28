#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - number of elements in a linked list
 * @h: linked list node pointer
 * Return: number of nodes in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = NULL;
	size_t len = 0;

	if (h == NULL)
		return (len);

	current = h;
	while (current)
	{
		len++;
		current = current->next;
	}

	return (len);
}
