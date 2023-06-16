#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) of
 * a dlistint_t linked list.
 *
 * @head: pointer to a dlistint_t linked list head.
 *
 * Return: sum of all the data in a dlistint_t linked list,
 * 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head)
	{
		temp = head;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	return (0);
}
