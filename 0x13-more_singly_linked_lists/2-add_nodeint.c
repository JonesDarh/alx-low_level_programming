#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: Pointer To The First node In the List.
 * @n: data to insert in that new node.
 *
 * Return: Pointer to new node, or NULL if fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
