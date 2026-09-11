#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index at which the new node should be inserted, starting from 0
 * @n: integer value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	cur = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}

	if (cur == NULL)
		return (NULL);

	if (cur->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = cur;
	new->next = cur->next;
	cur->next->prev = new;
	cur->next = new;

	return (new);
}
