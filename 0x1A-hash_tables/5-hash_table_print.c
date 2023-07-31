#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int v;
	hash_node_t *tmp;
	char flag = 0; /* 0 while no data has been print yet */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (v = 0; v < ht->size; v++)
	{
		tmp = ht->array[v];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
