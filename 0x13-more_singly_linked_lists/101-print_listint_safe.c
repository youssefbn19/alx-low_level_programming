#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to the first node in a listint_t linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = NULL, *fast_node = NULL;
	size_t i = 0;

	if (head == NULL)
		return (i);

	curr = fast_node = head;
	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		i++;
		curr = curr->next;
		if (fast_node->next && fast_node->next->next)
		{
			fast_node = fast_node->next->next;
			if (curr == fast_node)
			{
				if (curr != curr->next->next)
				{
					printf("[%p] %d\n", (void *)curr, curr->n);
					i++;
				}
				curr = curr->next;
				printf("[%p] %d\n", (void *)curr, curr->n);
				i++;

				printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
				exit(98);
			}
		}

	}

	return (i);
}
