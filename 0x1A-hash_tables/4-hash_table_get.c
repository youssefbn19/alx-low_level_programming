#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: The hash table you want to look into.
 * @key: They key we are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indx];
	if (temp)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
