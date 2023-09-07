#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int v;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (v = 0; v < ht->size; v++)
	{
		while (ht->array[v] != NULL)
		{
			next = ht->array[v]->next;
			free(ht->array[v]->key);
			free(ht->array[v]->value);
			free(ht->array[v]);
			ht->array[v] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
