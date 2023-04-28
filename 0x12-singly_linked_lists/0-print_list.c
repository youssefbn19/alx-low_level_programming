#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print all the elements of a linked list
 * @h: linked list node pointer
 * Return: number of nodes in a linked list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = NULL;
	int len = 0;

	if (h == NULL)
		return (len);

	current = h;
	while (current)
	{
		len++;
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
	}

	return (len);
}
