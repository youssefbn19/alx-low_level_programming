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
	unsigned long int i = 0;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
	{
		fprintf(stderr, "Can't allocate memory");
		return (NULL);
	}

	hash_t->size = size;
	if (size == 0)
		return (hash_t);

	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	{
		fprintf(stderr, "Can't allocate memory");
		return (NULL);
	}

	for (; i < size; i++)
		hash_t->array[i] = NULL;
	return (hash_t);
}

