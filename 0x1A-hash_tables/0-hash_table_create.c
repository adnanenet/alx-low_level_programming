#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 * @size: The size of the array.
 *
 * Return: If error occur - NULL.
 *         Otherwise - a pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hv;
	unsigned long int i;

	hv = malloc(sizeof(hash_table_t));
	if (hv == NULL)
		return (NULL);

	hv->size = size;
	hv->array = malloc(sizeof(hash_node_t *) * size);
	if (hv->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hv->array[i] = NULL;

	return (hv);
}
