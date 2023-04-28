#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to linked list node pointer
 * @str: string
 * Return: the address of the new element in the linked list
 * NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (*(str + len))
		len++;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
