#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 *
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, f_indx;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	else if (ht->array == NULL)
	{
		printf("{}\n");
		return;
	}

	for (f_indx = 0; f_indx < ht->size; f_indx++)
	{
		if (ht->array[f_indx])
			break;
	}
	printf("{");
	for (i = f_indx; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			if (i == f_indx)
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			if (temp->next)
			{
				temp = temp->next;
				while (temp)
				{
					printf(", '%s': '%s'", temp->key, temp->value);
					temp = temp->next;
				}
			}


		}
	}
	printf("}\n");
}
