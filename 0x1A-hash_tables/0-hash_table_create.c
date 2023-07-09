#include "hash_tables.h"
/**
 * hash_table_create -  creates a hash table.
 *
 * @size: hash table size
 *
 * Return: a pointer to the newly created hash table,
 * NULL if something goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;

	if (size == 0)
		return (NULL);

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;

	hash_t->array = calloc(hash_t->size, sizeof(hash_node_t *));
	if (hash_t->array == NULL)
		return (NULL);

	return (hash_t);
}

