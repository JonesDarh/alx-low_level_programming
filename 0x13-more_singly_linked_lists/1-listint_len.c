#include "lists.h"

/**
 * listint_len - returns The number of elements In a Linked Lists.
 * @h: linked list of type listint_t to traverse.
 *
 * Return: nbr Of Nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
