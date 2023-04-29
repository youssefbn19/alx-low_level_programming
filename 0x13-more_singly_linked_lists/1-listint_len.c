#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - prints all the number in a linked list
 *
 * @h: pointer to the first node in a linked list
 *
 * Return: number of nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = NULL;
	size_t n = 0;

	if (h == NULL)
		return (n);

	temp = h;
	while (temp)
	{
		temp = temp->next;
		n++;
	}

	return (n);
}
