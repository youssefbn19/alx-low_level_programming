#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * last_node - searches a listint_t linked list cycle for its last node
 *
 * @head: pointer to the first node in a listint_t linked list
 * @detect: pointer to the detected cycle pointer
 *
 * Return: pointer to the last node in the listint_t linked ist
 *
 */
const listint_t *last_node(const listint_t *head, const listint_t *detect)
{
	const listint_t *temp = NULL;

	temp = head;
	while (temp->next != detect->next)
	{
		temp = temp->next;
		detect = detect->next;
	}

	return (detect);
}
/**
 * detect_cycle - checks if a listint_t linked list has a cycle
 *
 * @head: pointer to the first node in a listint_t linked list
 *
 * Return: pointer if a cycle is detected, NULL if not detected
 */
const listint_t *detect_cycle(const listint_t *head)
{
	const listint_t *slow_node = NULL, *fast_node = NULL;

	if (head == NULL)
		return (NULL);

	slow_node = fast_node = head;

	while (slow_node && fast_node && fast_node->next)
	{
		slow_node = slow_node->next;
		fast_node = fast_node->next->next;

		if (slow_node == fast_node)
			return (slow_node);
	}

	return (NULL);
}
/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to the first node in a listint_t linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL, *detect = NULL, *last_node = NULL;
	size_t len = 0;

	if (head == NULL)
		return (0);

	temp = head;
	detect = detect_cycle(head);
	if (detect == NULL)
	{
		while (temp)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			len++;
		}
	}
	else
	{
		last_node = last_node(head, detect);
		while (temp != last_node)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		printf("->[%p] %d\n", (void *)(last_node->next), (last_node->next->n));
		exit(98);
	}

	return (len);
}
