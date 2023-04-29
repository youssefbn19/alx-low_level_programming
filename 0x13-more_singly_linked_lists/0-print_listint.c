#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the number in a linked list
 *
 * @h: pointer to the first node in a linked list
 *
 * Return: number of nodes in a linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = NULL;
	size_t n = 0;

	if (h == NULL)
		return (n);

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}

	return (n);
}
