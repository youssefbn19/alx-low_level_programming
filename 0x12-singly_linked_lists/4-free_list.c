#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the allocation memory of a linked list
 * @head: linked list node pointer
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
