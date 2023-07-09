#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table.
 *
 * @ht: The hash table you want to add or update the key/value to.
 * @key: String key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht == NULL || ht->array == NULL)
		return (0);
	else if (key == NULL || value == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[indx] == NULL)
		ht->array[indx] = node;
	else
	{
		temp = ht->array[indx];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				free(node);
				break;
			}
			else if (temp->next == NULL)
			{
				temp->next = node;
				break;
			}
			temp = temp->next;
		}
	}
	return (1);
}
