#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the key, or NULL if key isn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	cur = ht->array[index];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
			return (cur->value);
		cur = cur->next;
	}

	return (NULL);
}
