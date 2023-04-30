#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - calculates the sum of all linked list node data
 *
 * @head: Pointer to point to the first node of a linked list
 *
 * Return: the sum of all nodes data of a linked list
 * 0 if linked list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (sum);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
