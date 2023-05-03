#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe -  frees a listint_t list
 *
 * @h: pointer to the first node in a listint_t linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *temp = NULL, *detect = NULL, *lastNode = NULL;
	size_t len = 0;

	if (h == NULL || *h == NULL)
		return (len);

	temp = *h;
	detect = detect_cycle(*h);
	if (detect == NULL)
	{
		while (temp)
		{
			*h = (*h)->next;
			free((void *)temp);
			len++;
			temp = *h;
		}
	}
	else
	{
		lastNode = last_node(*h, detect);
		while (temp != lastNode)
		{
			*h = (*h)->next;
			free((void *)temp);
			len++;
			temp = *(h);
		}
		free((void *)lastNode);
		len++;
		lastNode = NULL;
	}
	temp = NULL;
	detect = NULL;
	*h = NULL;
	return (len);
}
