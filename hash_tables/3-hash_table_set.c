#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * make_node - creates a new hash node with duplicated key and value
 * @key: the key to duplicate
 * @value: the value to duplicate
 *
 * Return: pointer to the new node, or NULL on failure
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}

	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: the hash table
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *cur;
	char *value_copy;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	cur = ht->array[index];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);
			free(cur->value);
			cur->value = value_copy;
			return (1);
		}
		cur = cur->next;
	}

	new = make_node(key, value);
	if (new == NULL)
		return (0);

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
